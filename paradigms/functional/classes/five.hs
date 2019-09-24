multFac::[Int] -> Int -> [Int]
multFac [] _ = []
multFac (x:xs) fac = x * fac : multFac xs fac

main = do 
  print $ multFac [1,2] 2