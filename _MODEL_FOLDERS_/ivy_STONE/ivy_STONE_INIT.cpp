//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"ivy_STONE_DOT3.png"].CGImage;      
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
        glGenTextures(1, &ivy_STONE_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, ivy_STONE_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"ivy_STONE.png"].CGImage;           
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
        glGenTextures(1, &ivy_STONE_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, ivy_STONE_TEXTUREMAP);                              
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
    loadTexture("_MODEL_FOLDERS_/ivy_STONE/ivy_STONE_DOT3.png",     ivy_STONE_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/ivy_STONE/ivy_STONE.png",          ivy_STONE_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "ivy_STONE.cpp"                                                                                         
    glGenBuffers(1,              &ivy_STONE_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, ivy_STONE_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(ivy_STONE), ivy_STONE, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "ivy_STONE_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &ivy_STONE_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ivy_STONE_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(ivy_STONE_INDICES), ivy_STONE_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    ivy_STONE_boundingBox[0] = -0.521463;
    ivy_STONE_boundingBox[1] = 0.580542;
    ivy_STONE_boundingBox[2] = -0.486886;
    ivy_STONE_boundingBox[3] = 0.993401;
    ivy_STONE_boundingBox[4] = -1.42192;
    ivy_STONE_boundingBox[5] = 1.70697;
    //=====================================================   
    collisionBoxArray[boxCount][0] = -0.521463;
    collisionBoxArray[boxCount][1] = 0.580542;
    collisionBoxArray[boxCount][2] = -0.486886;
    collisionBoxArray[boxCount][3] = 0.993401;
    collisionBoxArray[boxCount][4] = -1.42192;
    collisionBoxArray[boxCount][5] = 1.70697;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
