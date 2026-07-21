@echo off

title Engine Generation

setlocal

echo ==== Begun: Generating project ====

cmake -G "Visual Studio 18 2026"                 ^
    -T host=x64                                  ^
    -S .                                        ^
    -B Temp/Binary                              ^
    -DBUILD_EDITOR=ON 




@REM echo === Begun: Generating engine project ===
@REM echo.

@REM call Tools/Setup/generate-engine-cmake.bat
@REM echo.
@REM call Tools/Setup/copy-engine-dlls.bat
@REM call Tools/Setup/copy-etc-files.bat

@REM echo === Begun: Generating slnx file ===
@REM cd Tools/Setup

@REM set CUR_DIR=%~dp0
@REM MoveSLN.exe %CUR_DIR%/Temp/Binary/ ../.. Eclipsed-Engine
@REM echo === Completed: Completed generating slnx file ===

@REM echo.
@REM echo === Completed: Generating engine project ===

@REM endlocal 

pause