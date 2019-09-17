-- runhaskell two.hs

compares:: Int -> Int -> Int -> Bool
compares x y z =
    if x == y && y == z && x == z then True else False

main = do
    putStrLn "Enter first value: "
    inputOne <- getLine
    putStrLn "Enter second value: " 
    inputTwo <- getLine 
    putStrLn "Enter third value: " 
    inputThree <- getLine 
    let x = (read inputOne :: Int)
    let y = (read inputTwo :: Int)
    let z = (read inputThree :: Int)
    if (compares x y z) then  putStrLn "The values are the same"  else putStrLn "The values are not the same"