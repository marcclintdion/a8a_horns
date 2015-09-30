    if(ivyLeaves_FRONT_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &ivyLeaves_FRONT_NORMALMAP);    
        ivyLeaves_FRONT_NORMALMAP = 0;                      
    }                                                              
    if(ivyLeaves_FRONT_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &ivyLeaves_FRONT_TEXTUREMAP);   
        ivyLeaves_FRONT_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(ivyLeaves_FRONT_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &ivyLeaves_FRONT_VBO);           
        ivyLeaves_FRONT_VBO  = 0;                           
    }                                                              
    if(ivyLeaves_FRONT_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &ivyLeaves_FRONT_INDICES_VBO);   
        ivyLeaves_FRONT_INDICES_VBO  = 0;                   
    }                                                              
