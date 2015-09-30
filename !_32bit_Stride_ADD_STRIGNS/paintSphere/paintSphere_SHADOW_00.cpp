    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-       
    setupTransforms_Shadows();                                                                   
    //========================                                                                   

    LoadIdentity(modelWorld);                                                                    
    //------------------------                                                                   
    glBindBuffer(GL_ARRAY_BUFFER, paintSphere_VBO);                                   
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, paintSphere_INDICES_VBO);                   
    //------------------------------------------------------------------------                   
    Translate(modelWorld, paintSphere_POSITION[0],                                    
                          paintSphere_POSITION[1],                                    
                          paintSphere_POSITION[2]);                                   
    //------------------------------------------------------------------------                   
    Rotate(modelWorld,    paintSphere_ROTATE[0],                                      
                          paintSphere_ROTATE[1],                                      
                          paintSphere_ROTATE[2],                                      
                          paintSphere_ROTATE[3]);                                     
//=============================================                                                  
SelectShader(shaderNumber);                                                                      
//=============================================                                                  
    glDrawElements(GL_TRIANGLES, 2880, GL_UNSIGNED_INT, 0);      
