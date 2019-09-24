--ghci class_ten.hs

student :: [(String, Int)] -> [(String, Int)]
student [] = []
student (stu, note) : xs  = if note > 3 then (alum, note) : student xs else student student xs  

--runhaskell class_ten.hs
main = do 
  print $ student [("Jose", 9)]