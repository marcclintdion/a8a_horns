    if(ivy_STONE_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &ivy_STONE_NORMALMAP);    
        ivy_STONE_NORMALMAP = 0;                      
    }                                                              
    if(ivy_STONE_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &ivy_STONE_TEXTUREMAP);   
        ivy_STONE_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(ivy_STONE_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &ivy_STONE_VBO);           
        ivy_STONE_VBO  = 0;                           
    }                                                              
    if(ivy_STONE_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &ivy_STONE_INDICES_VBO);   
        ivy_STONE_INDICES_VBO  = 0;                   
    }                                                              
