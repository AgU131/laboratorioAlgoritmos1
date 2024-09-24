import Data.Time (nominalDay)
import Data.Char (generalCategory)
--Resolucion Parcial 1 como practica Parcial 1 2024-04-22 (Tema D).pdf

-- LInk del examen: https://github.com/ExamenesViejos-FaMAF-Computacion/ExamenesViejos_AlgoritmosYEstructurasDeDatos1_FaMAF/blob/main/Laboratorio/Parcial%201%202024-04-22%20(Tema%20D).pdf

--Ejercicio 1

--a)

--data Novela = Nombre | Genero | Autor | NumeroDePaginas | Precio
type Nombre = String
data Genero = Drama | Romance | Misterio | Aventura
    deriving (Show, Eq)
type Autor = Nombre 
type NumeroDePaginas = Int
type Precio = Int
data Tema = Politica | Filosofia | Ciencia | Historia
    deriving (Show, Eq)
data Estilo = Clasica | Contemporanea | Experimental 
    deriving (Show, Eq)
data AreaDeEstudio = Astronomia | Fisica | Matematicas | Computacion 
    deriving (Show, Eq)
data Libro = Novela Nombre Genero Autor NumeroDePaginas Precio
           | Ensayo Nombre Tema Autor NumeroDePaginas
           | Poesia Nombre Estilo Autor NumeroDePaginas Precio
           | Cientifico Nombre AreaDeEstudio Autor NumeroDePaginas
    deriving (Show)

--b)

cuantasNovelasPorGenero :: [Libro] -> Genero -> Int
cuantasNovelasPorGenero _ gen = 0
cuantasNovelasPorGenero ((Novela _ Drama _ _ _):xs) Drama = 1 + cuantasNovelasPorGenero xs Drama
cuantasNovelasPorGenero ((Novela _ Romance _ _ _):xs) Romance = 1 + cuantasNovelasPorGenero xs Romance
cuantasNovelasPorGenero ((Novela _ Misterio _ _ _):xs) Misterio = 1 + cuantasNovelasPorGenero xs Misterio
cuantasNovelasPorGenero ((Novela _ Aventura _ _ _):xs) Aventura = 1 + cuantasNovelasPorGenero xs Aventura

--c)



instance Eq Libro
    where
        (Novela nombre1 genero1 autor1 _ _) == (Novela nombre2 genero2 autor2 _ _) = nombre1 == nombre2 && genero1 == genero2 && autor1 == autor2
        (Ensayo nombre1 tema1 autor1 _) == (Ensayo nombre2 tema2 autor2 _) = nombre1 == nombre2 && tema1 == tema2 && autor1 == autor2
        (Poesia nombre1 estilo1 autor1 _ _) == (Poesia nombre2 estilo2 autor2 _ _) = nombre1 == nombre2 && estilo1 == estilo2 && autor1 == autor2
        (Cientifico nombre1 area1 autor1 _) == (Cientifico nombre2 area2 autor2 _) = nombre1 == nombre2 && area1 == area2 && autor1 == autor2
{-      
            | genero == gen = 1 + cuantasNovelasPorGenero xs gen 
            | otherwise = cuantasNovelasPorGenero xs gen 
-}

--d)

hayDosDistintosConsecutivos :: [Libro] -> Bool
hayDosDistintosConsecutivos _ = False
hayDosDistintosConsecutivos (x:y:xs)
        | x/=y = True
        | otherwise = hayDosDistintosConsecutivos (y:xs)


--Ejercicio 2












