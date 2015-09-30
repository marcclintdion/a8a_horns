//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"ivyLeaves_FRONT_DOT3.png"].CGImage;      
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
        glGenTextures(1, &ivyLeaves_FRONT_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, ivyLeaves_FRONT_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"ivyLeaves_FRONT.png"].CGImage;           
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
        glGenTextures(1, &ivyLeaves_FRONT_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, ivyLeaves_FRONT_TEXTUREMAP);                              
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
    loadTexture("_MODEL_FOLDERS_/ivyLeaves_FRONT/ivyLeaves_FRONT_DOT3.png",     ivyLeaves_FRONT_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/ivyLeaves_FRONT/ivyLeaves_FRONT.png",          ivyLeaves_FRONT_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "ivyLeaves_FRONT.cpp"                                                                                         
    glGenBuffers(1,              &ivyLeaves_FRONT_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, ivyLeaves_FRONT_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(ivyLeaves_FRONT), ivyLeaves_FRONT, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "ivyLeaves_FRONT_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &ivyLeaves_FRONT_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ivyLeaves_FRONT_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(ivyLeaves_FRONT_INDICES), ivyLeaves_FRONT_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    ivyLeaves_FRONT_boundingBox[0] = -0.592116;
    ivyLeaves_FRONT_boundingBox[1] = 0.625595;
    ivyLeaves_FRONT_boundingBox[2] = -0.507548;
    ivyLeaves_FRONT_boundingBox[3] = 1.0602;
    ivyLeaves_FRONT_boundingBox[4] = 0.21346;
    ivyLeaves_FRONT_boundingBox[5] = 1.76159;
    //=====================================================   
    collisionBoxArray[boxCount][0] = -0.592116;
    collisionBoxArray[boxCount][1] = 0.625595;
    collisionBoxArray[boxCount][2] = -0.507548;
    collisionBoxArray[boxCount][3] = 1.0602;
    collisionBoxArray[boxCount][4] = 0.21346;
    collisionBoxArray[boxCount][5] = 1.76159;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
