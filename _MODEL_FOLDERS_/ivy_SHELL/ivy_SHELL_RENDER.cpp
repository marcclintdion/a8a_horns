setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, ivy_SHELL_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ivy_SHELL_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, ivy_SHELL_POSITION[0],                   
                          ivy_SHELL_POSITION[1],                   
                          ivy_SHELL_POSITION[2]);                  

    Rotate(modelWorld,    ivy_SHELL_ROTATE[0],                     
                          ivy_SHELL_ROTATE[1],                     
                          ivy_SHELL_ROTATE[2],                     
                          ivy_SHELL_ROTATE[3]);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, ivy_SHELL_ROTATE[0],                     
                          ivy_SHELL_ROTATE[1],                     
                          ivy_SHELL_ROTATE[2],                     
                          ivy_SHELL_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, ivy_SHELL_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, ivy_SHELL_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 5022, GL_UNSIGNED_INT, 0);           

