--runhaskell seven.hs

students :: [(String, [Int])] -> [(String, String, Int)]
students [] = []
students ((alum, notes) : xs ) 
  | ((sum notes) `div` length notes) > 4 = (alum, "Aprobado", ((sum notes) `div` length notes) ) : students xs
  | otherwise = (alum, "No Aprobado", ((sum notes) `div` length notes)) : students xs

countStudents :: [(String, [Int])] -> [String]
countStudents [] = []
countStudents ((alum, notes) : xs )
  | ((sum notes) `div` length notes) > 4 = "Aprobado" : countStudents xs
  | otherwise = "Desaprobado" : countStudents xs

main = do 

  let jose = ("Jose Cordova", [4,7,10,2])
  let juani = ("Juani Faks", [4,5,10,2])
  let lucas = ("Lucas Hasda", [6,6,6,6])
  let terry = ("Terry Torrico", [2,2,2,2])

  print $ students [jose, juani, lucas, terry]
  print $ countStudents [jose, juani, lucas, terry]