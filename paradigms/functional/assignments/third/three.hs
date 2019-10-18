--runhaskell three.hs

promedio :: (Real a, Fractional b) => [a] -> b
promedio x = realToFrac (sum x) / (fromIntegral $ length x)    

student :: (String, String, [Int]) -> (String, String, String)
student (name, lastName, notes) = if (promedio notes) > 4 then ("Aprobado", name, lastName)
    else ("No Aprobado", name, lastName)

main = do 
  print $ student ("Jose","Cordova", [2,5,10,2])