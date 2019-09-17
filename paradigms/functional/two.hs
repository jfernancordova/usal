main = do
    putStrLn “Enter Your Name!”
    name <- getLine
    let message = myFirstFunction name
    putStrLn message