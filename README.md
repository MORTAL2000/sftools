sftools
=======

Bunch of tools for SFML 2.0 application development.


Singleton
---------

This module provides a non intrusive tool to create singleton objects.


Resource Manager
----------------

This module provides :

* a fully generic manager that can be subclassed to generate customs managers like :
* a font (`sf::Font`) manager;
* an image (`sf::Image`) and texture (`sf::Texture`) managers;
* a sound buffer (`sf::SoundBuffer`) and music (`sf::Music`) managers;


Chronometer
-----------

This class provides the basic mechanism of a chronometer. This class was previously called `PausableClock`.


Animation
---------

`sftools` provides a set of class to render animation based on a sequence of frames. These classes are `Animation` which is a `sf::Drawable`, `Frame` which holds the data used to render one frame, and `FrameStream` that manages a sequence of frames.

