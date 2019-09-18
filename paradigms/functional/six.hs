-- runhaskell six.hs

volume :: Float -> Float
volume radius = (4.0 / 3.0) * pi * (radius ^ 3)

main = do 
  print $ volume 50