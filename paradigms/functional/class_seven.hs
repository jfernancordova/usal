posit::[Int] -> [Int]
posit [] = []
posit (x:xs) 
  | x >= 0 = x:posit xs
  | otherwise = posit xs

main = do 
    print $ posit[1,-2]