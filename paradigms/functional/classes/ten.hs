--runhaskell two.hs

student :: [(String, Int)] -> [(String, Int)]
student [] = []
student ((alum, note) : xs ) = if note > 4 then (alum, note) : student xs else student xs  

--runhaskell class_ten.hs
main = do 
  print $ student [("Jose", 2)]