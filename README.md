# rolog
Access SWI-Prolog from R

## Installation (Linux)

1. Please install SWI-Prolog from https://www.swi-prolog.org. You may wish to use the development version since this offers the new Picat-style syntax which is used in Example 2 below. 

`git clone https://github.com/SWI-Prolog/swipl-devel`

`cd swipl-devel`

`git submodule update --init`

`mkdir build`

`cd build`

`cmake ..`

`make`

`sudo make install`

More detailed installation instructions are found on the SWI-Prolog webpage.

_Please note:_ There is currently a problem with missing symbols from SWI-Prolog packs that are loaded from the R package. I am aware of two fixes. 

Either you invoke R below with LD_PRELOAD:

`LD_PRELOAD=/usr/local/lib/swipl/lib/x86_64-linux/libswipl.so R`

Or, alternatively, recompile and reinstall swipl:

`cmake .. -DCMAKE_C_STANDARD_LIBRARIES="-lswipl"`

`make`

`sudo make install`

I guess both of them are "cruel", so any hint is welcome.

3. Please install R on your computer

`sudo apt install r-base`

4. Please install the "rologpp" pack for SWI-prolog

`swipl`

`pack_install(rologpp).` (and respond with yes)

`halt.`

5. Please install the "rolog" pack for R

`R` (see above)

`install.packages("remotes")`

`library(remotes)`

`install_github("mgondan/rolog")`

Then move on to the examples.

## Installation instructions (Windows)

`rolog` is a source package, so a few things need to be done before you get started.

1. Please install SWI-Prolog from https://www.swi-prolog.org. You may wish to use the development version since this offers the new Picat-style syntax which is used in Example 2 below. In the last dialog, the Prolog installer asks if swipl should be in the `PATH`, please respond with yes.

2. Please install the new RTools 4.0 from https://cran.r-project.org/bin/windows/Rtools/. On that page they explain how to make `gcc` and `make` accessible to R and RStudio. I think this is not sufficient. You have to add something like `c:\rtools40\mingw64\bin` and `c:\rtools40\usr\bin` to the system `PATH`, e.g. by right-clicking on My Computer in the Windows explorer and then "Administration" and "Environment variables".

3. Please make sure you have a `git` client on your computer, the one recommended by RStudio is https://git-scm.com/download/win. As before, please allow the program to change the `PATH` so that `git.exe` is found.

4. Start RStudio _as administrator_* and install the libraries `Rcpp`, `RInside` (please recompile it by setting type="source").

`install.packages("Rcpp", lib=.Library)`

`install.packages("RInside", type="source", lib=.Library)`

*I am sure there's a better way for this, but for now it's working.

5. Start SWI-Prolog and install the `rologpp` library. This one enables invoking R from Prolog, i.e., the other way round.

`pack_install(rologpp).`

You might want to run some tests, e.g.,

`use_module(library(rologpp)).` (should just say true)

`r_init.` (should just say true)

`r_eval(methods::formalArgs(args(sin)), X).` (should respond `X = #("x").`)

6. Restart/Open R or RStudio as a normal user, then 

`install.packages("remotes")`

`library(remotes)`

`install_github("mgondan/rolog")`

`library(rolog)`

## Example 1

This is a hello(world).

`library(rolog)`

Load some facts and rules with `rolog_consult(system.file("likes.pl", package="rolog"))`

Run a query such as findall(X, likes(sam, X), List) with `rolog_findall(quote(likes(sam)))`.

## Example 2

`library(rmarkdown)` (you may need to install this package first)

Knit the file for HTML output. The example uses Prolog for rendering R expressions as MathML.

`render(system.file('mathml.Rmd', package='rolog'), output_file="~/mathml.html")`
