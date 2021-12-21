-- phpMyAdmin SQL Dump
-- version 4.0.10.10
-- http://www.phpmyadmin.net
--
-- Хост: 127.0.0.1:3306
-- Время создания: Дек 21 2021 г., 09:14
-- Версия сервера: 5.5.45
-- Версия PHP: 5.3.29

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- База данных: `Hacaton`
--

-- --------------------------------------------------------

--
-- Структура таблицы `Kino_teatr`
--

CREATE TABLE IF NOT EXISTS `Kino_teatr` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `Kinoteatr_nomi` varchar(50) NOT NULL,
  `Chipta_narxi` int(11) NOT NULL,
  `Dastur_nomi` varchar(50) NOT NULL,
  `Kuni` date NOT NULL,
  `janri` varchar(50) NOT NULL,
  `Vaqt` time NOT NULL,
  `Vaqti2` time NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=3 ;

--
-- Дамп данных таблицы `Kino_teatr`
--

INSERT INTO `Kino_teatr` (`id`, `Kinoteatr_nomi`, `Chipta_narxi`, `Dastur_nomi`, `Kuni`, `janri`, `Vaqt`, `Vaqti2`) VALUES
(1, 'Marvel studio', 150000, 'Orgimchak odam uyga yol yoq', '2021-12-15', 'Fantastika', '14:30:00', '17:00:00'),
(2, 'Marvel studio', 200000, 'Qasoskorlar abadiyat jangi', '2021-12-30', 'Fantastika', '17:30:00', '19:00:00');

-- --------------------------------------------------------

--
-- Структура таблицы `Muzey`
--

CREATE TABLE IF NOT EXISTS `Muzey` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `Muzey_nomi` varchar(50) NOT NULL,
  `Chipta_narxi` int(11) NOT NULL,
  `Viloyati` varchar(50) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=3 ;

--
-- Дамп данных таблицы `Muzey`
--

INSERT INTO `Muzey` (`id`, `Muzey_nomi`, `Chipta_narxi`, `Viloyati`) VALUES
(1, 'BOBUR MUZEY', 10000, 'Andijon'),
(2, 'ADABIYOT VA SAN`AT MUZEYI', 15000, 'Andijon');

-- --------------------------------------------------------

--
-- Структура таблицы `Teatr`
--

CREATE TABLE IF NOT EXISTS `Teatr` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `Teatr_nomi` varchar(50) NOT NULL,
  `Chipta_narxi` int(11) NOT NULL,
  `Dastur_nomi` varchar(50) NOT NULL,
  `janri` varchar(50) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=19 ;

--
-- Дамп данных таблицы `Teatr`
--

INSERT INTO `Teatr` (`id`, `Teatr_nomi`, `Chipta_narxi`, `Dastur_nomi`, `janri`) VALUES
(1, 'Qo`g`irchoq teatri', 15000, 'Zumrad va Qimmat', 'Hajviy'),
(2, 'Abbos Bakirov nomidagi teatr', 30000, 'QVZ', 'Comedia'),
(3, 'Rus Drama Teatri', 15000, 'Jamshidni izlab', 'Comedia'),
(4, 'YU.RAJABIY NOMIDAGI JIZZAX MUSIQA-DRAMA TEATRI', 13500, 'Alpomish', 'Comedia'),
(11, 'Ogahiy nomidagi musiqali drama teatri', 15000, 'Farhod va Shirin', 'Sevgi'),
(12, 'A.Navoiy nomidagi davlat musiqali drama teatri', 10000, 'Romeo va Juleta', 'Sevgi'),
(13, 'M.T.Toshmuhamedov nomidagi musiqali drama teatri', 25000, 'Bolalar uchun', 'Comedia'),
(14, 'X.OLIMJON NOMIDAGI SAMARQAND VILOYAT TEATR', 12500, 'Sariq devni minib', 'Comedia'),
(15, 'Musiqali dramma teatri', 14500, 'Konsert', 'Musiqa'),
(16, 'M.Uygʻur nomidagi oʻzbek davlat musiqali drama tea', 14500, 'Zumrad va Qimmat', 'Comedia'),
(17, 'Bolalar teatri', 12500, 'Egrivoy va Togrivoy', 'Comedia'),
(18, 'Diydor teatri', 9500, 'Bolalar uchun', 'Fantastika');

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
