/*

 sftools - Copyright (c) 2012 Marco Antognini

 This software is provided 'as-is', without any express or implied warranty. In
 no event will the authors be held liable for any damages arising from the use
 of this software.

 Permission is granted to anyone to use this software for any purpose, including
 commercial applications, and to alter it and redistribute it freely, subject to
 the following restrictions:

 1. The origin of this software must not be misrepresented; you must not claim
 that you wrote the original software. If you use this software in a product,
 an acknowledgment in the product documentation would be appreciated but is
 not required.

 2. Altered source versions must be plainly marked as such, and must not be
 misrepresented as being the original software.

 3. This notice may not be removed or altered from any source distribution.

 */

/*!
 @file sftools/ResourceManager/SFMLManagers.hpp
 @brief Defines a few managers for SFML resources
 
 @todo document this file
 */

#ifndef __SFTOOLS_SFMLMANAGERS_HPP__
#define __SFTOOLS_SFMLMANAGERS_HPP__

#include <sftools/ResourceManager/Loaders.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Audio/Music.hpp>

/*!
 @namespace sftools
 @brief Simple and Fast Tools
 */
namespace sftools
{
    /*!
     @namespace sftools::loader
     @brief Contains loader utilities for the resource managers
     */
    namespace loader
    {
        typedef loader::LoadFromFile<sf::Texture> TextureLoaderFromFile;
        typedef loader::LoadFromFile<sf::Font>    FontLoaderFromFile;
        typedef loader::OpenFromFile<sf::Music>   MusicLoaderFromFile;
    }

    typedef sftools::GenericManager<sf::Texture, std::string, loader::TextureLoaderFromFile> TextureManager;
    typedef sftools::GenericManager<sf::Font,    std::string, loader::FontLoaderFromFile>    FontManager;
    typedef sftools::GenericManager<sf::Music,   std::string, loader::MusicLoaderFromFile>   MusicManager;

    /*!
     @namespace sftools::singleton
     @brief Contains singleton object typedefs
     */
    namespace singleton
    {
        typedef sftools::Singleton<TextureManager> TextureManager;
        typedef sftools::Singleton<FontManager>    FontManager;
        typedef sftools::Singleton<MusicManager>   MusicManager;
    }
}


#endif // __SFTOOLS_SFMLMANAGERS_HPP__
