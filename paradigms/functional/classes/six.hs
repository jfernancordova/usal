posit::[Int] -> [Int]
posit [] = []
posit (x:xs) = if x >= 0 then x:posit xs else posit xs

main = do 
    print $ posit[1,-2]