//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"ivy_SHELL_DOT3.png"].CGImage;      
    width                   =  CGImageGetWidth(spriteImage);                                          
    height                  =  CGImageGetHeight(spriteImage);                                         
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                    
    spriteContext           =  CGBitmapContextCreate(spriteData, width,                               
                                                                 height,                              
                                                                 8,                                   
                                                                 width * 4,                           
                                                                 CGImageGetColorSpace(spriteImage),   
                                                                 kCGImageAlphaNoneSkipLast);          
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                           
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                           
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                           
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                 
    CGContextRelease(spriteContext);                                                                  
    //---------                                                                                       
        glGenTextures(1, &ivy_SHELL_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, ivy_SHELL_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"ivy_SHELL.png"].CGImage;           
    width                   =  CGImageGetWidth(spriteImage);                                          
    height                  =  CGImageGetHeight(spriteImage);                                         
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                    
    spriteContext           =  CGBitmapContextCreate(spriteData,                                      
                                                     width,                                           
                                                     height,                                          
                                                     8,                                               
                                                     width * 4,                                       
                                                     CGImageGetColorSpace(spriteImage),               
                                                     kCGImageAlphaNoneSkipLast);                      
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                           
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                           
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                           
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                 
    CGContextRelease(spriteContext);                                                                  
    //---------                                                                                       
        glGenTextures(1, &ivy_SHELL_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, ivy_SHELL_TEXTUREMAP);                              
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
            free(spriteData);                                                                         
        }                                                                                             
//----                                                                                                
#endif                                                                                                
//========================================================================                            
    //-----------------------------------------------------------------------------------                                              
    #ifdef WIN32                                                                                                                       
    loadTexture("_MODEL_FOLDERS_/ivy_SHELL/ivy_SHELL_DOT3.png",     ivy_SHELL_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/ivy_SHELL/ivy_SHELL.png",          ivy_SHELL_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "ivy_SHELL.cpp"                                                                                         
    glGenBuffers(1,              &ivy_SHELL_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, ivy_SHELL_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(ivy_SHELL), ivy_SHELL, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "ivy_SHELL_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &ivy_SHELL_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ivy_SHELL_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(ivy_SHELL_INDICES), ivy_SHELL_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    ivy_SHELL_boundingBox[0] = -0.538578;
    ivy_SHELL_boundingBox[1] = 0.594729;
    ivy_SHELL_boundingBox[2] = -0.538005;
    ivy_SHELL_boundingBox[3] = 1.02047;
    ivy_SHELL_boundingBox[4] = -1.44643;
    ivy_SHELL_boundingBox[5] = 1.71992;
    //=====================================================   
    collisionBoxArray[boxCount][0] = -0.538578;
    collisionBoxArray[boxCount][1] = 0.594729;
    collisionBoxArray[boxCount][2] = -0.538005;
    collisionBoxArray[boxCount][3] = 1.02047;
    collisionBoxArray[boxCount][4] = -1.44643;
    collisionBoxArray[boxCount][5] = 1.71992;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
