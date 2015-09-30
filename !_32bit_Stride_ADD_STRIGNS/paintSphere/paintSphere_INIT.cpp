//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"paintSphere_DOT3.png"].CGImage;      
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
        glGenTextures(1, &paintSphere_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, paintSphere_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"paintSphere.png"].CGImage;           
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
        glGenTextures(1, &paintSphere_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, paintSphere_TEXTUREMAP);                              
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
    loadTexture("_MODEL_FOLDERS_/paintSphere/paintSphere_DOT3.png",     paintSphere_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/paintSphere/paintSphere.png",          paintSphere_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "paintSphere.cpp"                                                                                         
    glGenBuffers(1,              &paintSphere_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, paintSphere_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(paintSphere), paintSphere, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "paintSphere_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &paintSphere_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, paintSphere_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(paintSphere_INDICES), paintSphere_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    paintSphere_boundingBox[0] = -0.990212;
    paintSphere_boundingBox[1] = 0.990574;
    paintSphere_boundingBox[2] = -0.994082;
    paintSphere_boundingBox[3] = 0.986704;
    paintSphere_boundingBox[4] = -0.996825;
    paintSphere_boundingBox[5] = 0.98396;
    //=====================================================   
    collisionBoxArray[boxCount][0] = -0.990212;
    collisionBoxArray[boxCount][1] = 0.990574;
    collisionBoxArray[boxCount][2] = -0.994082;
    collisionBoxArray[boxCount][3] = 0.986704;
    collisionBoxArray[boxCount][4] = -0.996825;
    collisionBoxArray[boxCount][5] = 0.98396;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
