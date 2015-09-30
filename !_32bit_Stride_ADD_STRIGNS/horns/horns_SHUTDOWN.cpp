    if(horns_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &horns_NORMALMAP);    
        horns_NORMALMAP = 0;                      
    }                                                              
    if(horns_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &horns_TEXTUREMAP);   
        horns_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(horns_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &horns_VBO);           
        horns_VBO  = 0;                           
    }                                                              
    if(horns_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &horns_INDICES_VBO);   
        horns_INDICES_VBO  = 0;                   
    }                                                              
