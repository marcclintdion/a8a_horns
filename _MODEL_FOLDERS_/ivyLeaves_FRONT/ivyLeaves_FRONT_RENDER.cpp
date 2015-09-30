setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, ivyLeaves_FRONT_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ivyLeaves_FRONT_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, ivyLeaves_FRONT_POSITION[0],                   
                          ivyLeaves_FRONT_POSITION[1],                   
                          ivyLeaves_FRONT_POSITION[2]);                  

    Rotate(modelWorld,    ivyLeaves_FRONT_ROTATE[0],                     
                          ivyLeaves_FRONT_ROTATE[1],                     
                          ivyLeaves_FRONT_ROTATE[2],                     
                          ivyLeaves_FRONT_ROTATE[3]);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, ivyLeaves_FRONT_ROTATE[0],                     
                          ivyLeaves_FRONT_ROTATE[1],                     
                          ivyLeaves_FRONT_ROTATE[2],                     
                          ivyLeaves_FRONT_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, ivyLeaves_FRONT_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, ivyLeaves_FRONT_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 8709, GL_UNSIGNED_INT, 0);           

