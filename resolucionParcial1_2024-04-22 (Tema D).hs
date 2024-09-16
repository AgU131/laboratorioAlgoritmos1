--Resolucion Parcial 1 como practica Parcial 1 2024-04-22 (Tema D).pdf

-- LInk del examen: https://github.com/ExamenesViejos-FaMAF-Computacion/ExamenesViejos_AlgoritmosYEstructurasDeDatos1_FaMAF/blob/main/Laboratorio/Parcial%201%202024-04-22%20(Tema%20D).pdf

--Ejercicio 1

--a)

--data Novela = Nombre | Genero | Autor | NumeroDePaginas | Precio
type Nombre = String
data Genero = Drama | Romance | Misterio | Aventura
    deriving Show
type Autor = Nombre 
type NumeroDePaginas = Int
type Precio = Int
data Tema = Politica | Filosofia | Ciencia | Historia
    deriving Show
data Estilo = Clasica | Contemporanea | Experimental 
    deriving Show
data AreaDeEstudio = Astronomia | Fisica | Matematicas | Computacion 
    deriving Show
data Libro = Novela Nombre Genero Autor NumeroDePaginas Precio
           | Ensayo Nombre Tema Autor NumeroDePaginas
           | Poesia Nombre Estilo Autor NumeroDePaginas Precio
           | Cientifico Nombre AreaDeEstudio Autor NumeroDePaginas
    deriving Show

--b)

cuantasNovelasPorGenero :: [Libro] -> Genero -> Int
cuantasNovelasPorGenero _ gen = 0
cuantasNovelasPorGenero ((Novela _ Drama _ _ _):xs) Drama = 1 + cuantasNovelasPorGenero xs Drama
cuantasNovelasPorGenero ((Novela _ Romance _ _ _):xs) Romance = 1 + cuantasNovelasPorGenero xs Romance
cuantasNovelasPorGenero ((Novela _ Misterio _ _ _):xs) Misterio = 1 + cuantasNovelasPorGenero xs Misterio
cuantasNovelasPorGenero ((Novela _ Aventura _ _ _):xs) Aventura = 1 + cuantasNovelasPorGenero xs Aventura




{-}
            | genero == gen = 1 +  cuantasNovelasPorGenero xs gen 
            | otherwise = cuantasNovelasPorGenero xs gen 
-}


--Ejercicio 2












