    if(paintSphere_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &paintSphere_NORMALMAP);    
        paintSphere_NORMALMAP = 0;                      
    }                                                              
    if(paintSphere_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &paintSphere_TEXTUREMAP);   
        paintSphere_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(paintSphere_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &paintSphere_VBO);           
        paintSphere_VBO  = 0;                           
    }                                                              
    if(paintSphere_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &paintSphere_INDICES_VBO);   
        paintSphere_INDICES_VBO  = 0;                   
    }                                                              
