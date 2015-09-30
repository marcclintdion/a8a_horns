    if(ivyLeaves_REAR_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &ivyLeaves_REAR_NORMALMAP);    
        ivyLeaves_REAR_NORMALMAP = 0;                      
    }                                                              
    if(ivyLeaves_REAR_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &ivyLeaves_REAR_TEXTUREMAP);   
        ivyLeaves_REAR_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(ivyLeaves_REAR_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &ivyLeaves_REAR_VBO);           
        ivyLeaves_REAR_VBO  = 0;                           
    }                                                              
    if(ivyLeaves_REAR_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &ivyLeaves_REAR_INDICES_VBO);   
        ivyLeaves_REAR_INDICES_VBO  = 0;                   
    }                                                              
