mkdir bin

copy lib\x64\SDL2.dll bin
copy lib\x64\SDL2_mixer.dll bin

copy SDL2_mixer\external\lib\x64\libogg-0.dll bin
copy SDL2_mixer\external\lib\x64\libvorbisfile-3.dll bin
copy SDL2_mixer\external\lib\x64\libogg-0.dll bin

xcopy  Assets bin\Assets /e /i /h /y
xcopy  Assets\Shaders\GL bin\Assets\Shaders /e /i /h /y

copy x64\Release\JellyCar.exe bin
