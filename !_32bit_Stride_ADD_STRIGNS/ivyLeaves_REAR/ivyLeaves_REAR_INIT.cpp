//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"ivyLeaves_REAR_DOT3.png"].CGImage;      
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
        glGenTextures(1, &ivyLeaves_REAR_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, ivyLeaves_REAR_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"ivyLeaves_REAR.png"].CGImage;           
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
        glGenTextures(1, &ivyLeaves_REAR_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, ivyLeaves_REAR_TEXTUREMAP);                              
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
    loadTexture("_MODEL_FOLDERS_/ivyLeaves_REAR/ivyLeaves_REAR_DOT3.png",     ivyLeaves_REAR_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/ivyLeaves_REAR/ivyLeaves_REAR.png",          ivyLeaves_REAR_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "ivyLeaves_REAR.cpp"                                                                                         
    glGenBuffers(1,              &ivyLeaves_REAR_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, ivyLeaves_REAR_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(ivyLeaves_REAR), ivyLeaves_REAR, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "ivyLeaves_REAR_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &ivyLeaves_REAR_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ivyLeaves_REAR_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(ivyLeaves_REAR_INDICES), ivyLeaves_REAR_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    ivyLeaves_REAR_boundingBox[0] = -0.619853;
    ivyLeaves_REAR_boundingBox[1] = 0.696852;
    ivyLeaves_REAR_boundingBox[2] = -0.500738;
    ivyLeaves_REAR_boundingBox[3] = 0.655436;
    ivyLeaves_REAR_boundingBox[4] = -1.52568;
    ivyLeaves_REAR_boundingBox[5] = 0.398871;
    //=====================================================   
    collisionBoxArray[boxCount][0] = -0.619853;
    collisionBoxArray[boxCount][1] = 0.696852;
    collisionBoxArray[boxCount][2] = -0.500738;
    collisionBoxArray[boxCount][3] = 0.655436;
    collisionBoxArray[boxCount][4] = -1.52568;
    collisionBoxArray[boxCount][5] = 0.398871;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
