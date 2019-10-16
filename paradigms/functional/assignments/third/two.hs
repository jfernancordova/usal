--runhaskell two.hs

student :: (String, String, Int) -> String
student (name, lastName, note) = if note > 4 then "Aprobado" else "No Aprobado" 

main = do 
  print $ student ("Jose","Cordova", 5)