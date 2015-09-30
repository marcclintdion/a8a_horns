    if(ivy_SHELL_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &ivy_SHELL_NORMALMAP);    
        ivy_SHELL_NORMALMAP = 0;                      
    }                                                              
    if(ivy_SHELL_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &ivy_SHELL_TEXTUREMAP);   
        ivy_SHELL_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(ivy_SHELL_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &ivy_SHELL_VBO);           
        ivy_SHELL_VBO  = 0;                           
    }                                                              
    if(ivy_SHELL_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &ivy_SHELL_INDICES_VBO);   
        ivy_SHELL_INDICES_VBO  = 0;                   
    }                                                              
