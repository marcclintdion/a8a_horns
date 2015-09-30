setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, ivy_STONE_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ivy_STONE_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, ivy_STONE_POSITION[0],                   
                          ivy_STONE_POSITION[1],                   
                          ivy_STONE_POSITION[2]);                  

    Rotate(modelWorld,    ivy_STONE_ROTATE[0],                     
                          ivy_STONE_ROTATE[1],                     
                          ivy_STONE_ROTATE[2],                     
                          ivy_STONE_ROTATE[3]);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, ivy_STONE_ROTATE[0],                     
                          ivy_STONE_ROTATE[1],                     
                          ivy_STONE_ROTATE[2],                     
                          ivy_STONE_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, ivy_STONE_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, ivy_STONE_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 5022, GL_UNSIGNED_INT, 0);           

