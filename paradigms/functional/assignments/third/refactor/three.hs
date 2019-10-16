--runhaskell three.hs

student :: [(String, String, Int)] -> [(String, String, String, Int)]
student [] = []
student ((name, lastName, note) : xs ) = if note > 4 then ("Aprobado", name, lastName, note) : student xs 
    else ("No Aprobado", name, lastName, note) : student xs  

--runhaskell class_ten.hs
main = do 
  print $ student [("Jose","Cordova", 2)]