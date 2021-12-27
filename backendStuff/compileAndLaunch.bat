set engine-path="INSERT_ROOT_PATH_OF_ENGINE_INSTALL_HERE"
set project-path="INSERT_ROOT_PATH_OF_PROJECT_HERE_(WITHOUT_THE_.UPROJECT)"


%engine-path%\Engine\Binaries\DotNET\UnrealBuildTool.exe -projectfiles -project="%project-path%\FactoryGame.uproject" -game -rocket -progress

%engine-path%\Engine\Build\BatchFiles\Build.bat FactoryGameEditor Win64 Development -Project="%project-path%\FactoryGame.uproject" -WaitMutex -FromMsBuild

%engine-path%\Engine\Build\BatchFiles\Build.bat FactoryGameEditor Win64 Shipping -Project="%project-path%\FactoryGame.uproject" -WaitMutex -FromMsBuild