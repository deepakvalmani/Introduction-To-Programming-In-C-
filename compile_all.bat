@echo off
REM ITP C++ Course - Compilation Script for Windows
REM Compiles all C++ programs in the repository

echo === ITP C++ Course Compilation Script ===
echo.

setlocal enabledelayedexpansion

REM Function to compile a single file
:compile_file
set file=%~1
set output=%~n1

echo Compiling: %file%
g++ -std=c++17 -Wall -Wextra "%file%" -o "%output%.exe"

if %errorlevel% equ 0 (
    echo   ✓ Success: Created %output%.exe
) else (
    echo   ✗ Failed: Compilation error
)
goto :eof

REM Main compilation logic
echo Starting compilation...
echo.

REM Find and compile all .cpp files
for /r %%f in (*.cpp) do (
    REM Skip solutions directory
    echo %%f | findstr /i "solutions" >nul
    if errorlevel 1 (
        call :compile_file "%%f"
    )
)

echo.
echo === Compilation Complete ===
echo Run programs with: program_name.exe
