    basic_SHADER = glCreateProgram();                                                                                     
        //----------------------------------------------------                                                                  
    const GLchar *vertexSource_basic =                                                                                    

    " #define highp                                                                                                             \n" 
    
    //--------------------------------------------     
    "    attribute       vec4   position;                                                                                       \n" 
    "    attribute       vec3   normal;                                                                                         \n" 
    "    attribute       vec2   textureCoords;                                                                                  \n" 
    //--------------------------------------------   
    "    uniform         mat4   modelView;                                                                                      \n" 
    "    uniform         mat4   projection;                                                                                     \n" 
    "    uniform         mat4   view;                                                                                           \n"         
    "    uniform         mat4   modelWorld;                                                                                     \n"         
    "    uniform         mat4   view_Rotate;                                                                                    \n"            
    "    uniform         mat4   moveSetMatrix;                                                                                  \n"            
    "    uniform         mat4   light_TextureMatrix;                                                                            \n"        
    "    uniform         mat4   lightMatrix;                                                                                    \n" 
    //--------------------------------------------                                        
    "    uniform  highp  vec4   light_POSITION_01;                                                                              \n" 
    //--------------------------------------------
    "    varying  highp  vec4   shadowTexcoord;                                                                                 \n"       
    //--------------------------------------------
    "    varying  highp  vec4   lightPosition_PASS_01;                                                                          \n" 
    "    varying  highp  vec2   varTexcoord;                                                                                    \n" 
    //--------------------------------------------
    "    varying  highp  vec3   normal_PASS;                                                                                    \n" 
    //--------------------------------------------



    //===============================================================================================
    
    " void main()                                                                                                               \n" 
    " {                                                                                                                         \n" 
         
          //-------------------------------------------------------------------------------    
    "     normal_PASS             =  (modelWorld * highp vec4(normal, 1.0)).xyz;                               \n" 
         
          //-------------------------------------------------------------------------------    
    "     shadowTexcoord          =  light_TextureMatrix * moveSetMatrix * modelWorld * position;                               \n" 
          //-------------------------------------------------------------------------------
    "     varTexcoord             =  textureCoords;                                                                             \n" 
          //===============================================================================
    "     lightPosition_PASS_01   =  normalize(lightMatrix * light_POSITION_01 - position);                                   \n" 
          //-------------------------------------------------------------------------------
    "     gl_Position             =  projection * view * view_Rotate  * moveSetMatrix * modelWorld * position;                    \n" 
    
    " } \n";   
    
    //===================================================================================================================================                 

    const GLchar *fragmentSource_basic =                                                                                  

    "#ifdef GL_ES                                                                                                                  \n" 
    "#else                                                                                                                         \n" 
    "#define highp                                                                                                                 \n" 
    "#endif                                                                                                                        \n" 
    
    
    
    
    
    //--------------------------------------------
    "    uniform  sampler2D     ShadowTexture;                                                                                     \n"   

    "    varying  highp  vec4   shadowTexcoord;                                                                                    \n"       
    //--------------------------------------------
    "    uniform  sampler2D     NormalMap;                                                                                         \n" 
    "             highp  vec3   NormalTex;                                                                                         \n" 

    "             highp  float  NdotL1_DIFFUSE;                                                                                            \n" 
    "             highp  float  NdotL1_SPEC;                                                                                            \n"     
    //--------------------------------------------
    "    uniform  sampler2D     Texture1;                                                                                          \n"     
    "    varying  highp  vec2   varTexcoord;                                                                                       \n" 
    //--------------------------------------------
    "    uniform  highp  float  shininess;                                                                                         \n"    
    "             highp  vec4   gloss;                                                                                             \n" 
    //--------------------------------------------                                        
    "    uniform  highp  vec4   light_POSITION_01;                                                                              \n" 

    //--------------------------------------------                                                                      
    "    varying  highp  vec4   lightPosition_PASS_01;                                                                             \n" 
    //--------------------------------------------                                                                       
    "             highp  vec4   tempColor;                                                                                         \n" 
    //-------------------------------------------- 
    "             highp  float  comp;                                                                                              \n" 
    "             highp  float  depth_PowerVR;                                                                                     \n" 
    "             highp  float  shadowVal;                                                                                         \n" 
    "             highp  float  bias;                                                                                              \n"         
   
    //--------------------------------------------
   
    "    varying  highp  vec3   normal_PASS;                                                                                    \n" 

    //--------------------------------------------     
    //=======================================================================================================================                      
  
    "void main()                                                                                                                    \n" 
    "{                                                                                                                              \n" 

  
  
    "    NormalTex             =  texture2D(NormalMap,  varTexcoord.xy).xyz;                                                     \n" 
    "    NormalTex             =  normalize( (NormalTex  - 0.5));                                                                 \n" 
    "    NdotL1_DIFFUSE        =  max(dot(NormalTex, normalize(lightPosition_PASS_01.xyz)), 0.0) * texture2D(Texture1,  varTexcoord.xy).y;  \n" 

    "    NdotL1_SPEC           =  max(dot(NormalTex, normalize(lightPosition_PASS_01.xyz)), 0.0);  \n" 
  
        //----------------------------------------------------------------------------                                                   
                                         //"bias                  =  shininess * tan(acos(NdotL1));                                 \n" 
                                         //"bias                  =  clamp(bias, 0.0, 0.1);                                         \n"               

         //-----------------------             
    "    bias                     =  0.006114;                                                                                     \n"         
    "    comp                     = (shadowTexcoord.z / shadowTexcoord.w) - bias;                                                   \n" 
    "    depth_PowerVR            =  texture2DProj(ShadowTexture, shadowTexcoord).r;                                                \n" 
   
    "    shadowVal                =  comp <= depth_PowerVR ? 1.0 : 0.3;                                                             \n" 
         //---------------------------------------------------------------------------------------------------------------  
    

      
         //---------------------------------------------------------------------------------------------------------------   

         " highp float invert_NdotL1 =    -1.0 * (1.0 - NdotL1_DIFFUSE);                                \n"
 

    "    gl_FragColor             = (    texture2D(Texture1,  varTexcoord.xy) * NdotL1_DIFFUSE                                              \n" 
    
    "                             + (texture2D(Texture1,  varTexcoord.xy) * 0.4 * highp vec4(max(pow(NdotL1_SPEC, 50.0), 0.0))) )                                                 \n" 
   
//   "                              + ( 0.2 * highp vec4(max(pow(NdotL1, 100.0), 0.0)))                                                \n" 
     
     "                            -  texture2D(Texture1,  varTexcoord.xy) *invert_NdotL1*.16;                                                                                               \n" 
  
   
 
    
//    "    gl_FragColor.w           =  highp float invertAlpha =  -1.0 * (gl_FragColor.w - 1.0);                                                                                    \n"     
  
    
    
    
    "}\n";

    
        
        
        
    //=======================================================================================================================                   

        basic_SHADER_VERTEX = glCreateShader( GL_VERTEX_SHADER);                                                          
        glShaderSource( basic_SHADER_VERTEX, 1, &vertexSource_basic, NULL );                                        
        glCompileShader( basic_SHADER_VERTEX);                                              //glShaderBinary                              
        //----------------------------------------------------                                                                  
        basic_SHADER_FRAGMENT = glCreateShader( GL_FRAGMENT_SHADER);                                                      
        glShaderSource( basic_SHADER_FRAGMENT, 1, &fragmentSource_basic, NULL );                                    
        glCompileShader(basic_SHADER_FRAGMENT);                                              //glShaderBinary                                                                             
        //--------------------------------------------------------------------------------------------------                    
        glAttachShader( basic_SHADER, basic_SHADER_VERTEX );                                                        
        glAttachShader( basic_SHADER, basic_SHADER_FRAGMENT );                                                      
        //--------------------------------------------------------------------------------------------------                    
        glBindAttribLocation(basic_SHADER,   0, "position");                                                              
        glBindAttribLocation(basic_SHADER,   1, "normal");                                                            
        glBindAttribLocation(basic_SHADER,   2, "textureCoords");                                                             
        //--------------------------------------------------------------------------------------------------                    
        glDeleteShader( basic_SHADER_VERTEX);                                                                             
        glDeleteShader( basic_SHADER_FRAGMENT);                                                                           
        glLinkProgram(basic_SHADER);                                                                                      
        //--------------------------------------------------------------------------------------------------                    
        UNIFORM_LIGHT_MATRIX_basic                       = glGetUniformLocation(basic_SHADER, "lightMatrix");                
        //-----------------------------        
        UNIFORM_MODELVIEW_basic                          = glGetUniformLocation(basic_SHADER, "modelView");                  
        UNIFORM_PROJECTION_basic                         = glGetUniformLocation(basic_SHADER, "projection");  
        UNIFORM_VIEW_basic                               = glGetUniformLocation(basic_SHADER, "view");                  
        UNIFORM_MODELWORLD_basic                         = glGetUniformLocation(basic_SHADER, "modelWorld");          
        UNIFORM_VIEW_ROTATE_basic                        = glGetUniformLocation(basic_SHADER, "view_Rotate");             
        UNIFORM_MOVESET_MATRIX_basic                     = glGetUniformLocation(basic_SHADER, "moveSetMatrix");          
        //-------------------------------
        UNIFORM_SHADOW_LIGHT_TEXTURE_MATRIX_basic        = glGetUniformLocation(basic_SHADER, "light_TextureMatrix");                                                  
        //-------------------------------      

        UNIFORM_LIGHT_POSITION_01_basic                  = glGetUniformLocation(basic_SHADER, "light_POSITION_01");    
                  
        UNIFORM_shininess_basic                          = glGetUniformLocation(basic_SHADER, "shininess");  

        //--------------------------------
        UNIFORM_ShadowTexture_basic                      = glGetUniformLocation(basic_SHADER, "ShadowTexture");           

        UNIFORM_TEXTURE_DOT3_basic                       = glGetUniformLocation(basic_SHADER, "NormalMap");                  
        UNIFORM_TEXTURE_basic                            = glGetUniformLocation(basic_SHADER, "Texture1");  
