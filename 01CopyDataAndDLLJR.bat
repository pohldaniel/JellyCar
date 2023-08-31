REM this for lunching out of visual studio

copy lib\x64\SDL2.dll JellyCar
copy lib\x64\SDL2_mixer.dll JellyCar

copy SDL2_mixer\external\lib\x64\libogg-0.dll JellyCar

xcopy  Assets JellyCar\Assets /e /i /h /y
xcopy  Assets\Shaders\GL JellyCar\Assets\Shaders /e /i /h /y
