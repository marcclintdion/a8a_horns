setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, ivyLeaves_REAR_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ivyLeaves_REAR_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, ivyLeaves_REAR_POSITION[0],                   
                          ivyLeaves_REAR_POSITION[1],                   
                          ivyLeaves_REAR_POSITION[2]);                  

    Rotate(modelWorld,    ivyLeaves_REAR_ROTATE[0],                     
                          ivyLeaves_REAR_ROTATE[1],                     
                          ivyLeaves_REAR_ROTATE[2],                     
                          ivyLeaves_REAR_ROTATE[3]);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, ivyLeaves_REAR_ROTATE[0],                     
                          ivyLeaves_REAR_ROTATE[1],                     
                          ivyLeaves_REAR_ROTATE[2],                     
                          ivyLeaves_REAR_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, ivyLeaves_REAR_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, ivyLeaves_REAR_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 8415, GL_UNSIGNED_INT, 0);           

