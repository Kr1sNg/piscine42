" Définir la largeur d'une tabulation à 4 espaces
set tabstop=4

" Définir la largeur d'une indentation automatique à 4 espaces
set shiftwidth=4

" Faire en sorte que la touche de tabulation insère 4 espaces
set softtabstop=4

" Afficher les numéros de ligne
set number

" Indentation automatique
" set autoindent

" Activer la coloration syntaxique
syntax on

" Afficher la barre de statut en bas
set laststatus=2

" Afficher les parenthèses correspondantes
set showmatch

" Utiliser 256 couleurs dans le terminal
set t_Co=256

" Activer la sélection visuelle par ligne
vnoremap <S-Up> v<Up>
vnoremap <S-Down> v<Down>
vnoremap <S-Left> v<Left>
vnoremap <S-Right> v<Right>

" Déplacer une ligne vers le haut avec Alt + Flèche Haut
nnoremap <A-Up> :m .-2<CR>==

" Déplacer une ligne vers le bas avec Alt + Flèche Bas
nnoremap <A-Down> :m .+1<CR>==

" En mode Visuel, déplacer la sélection vers le haut avec Alt + Flèche Haut
vnoremap <A-Up> :m '<-2<CR>gv=gv

" En mode Visuel, déplacer la sélection vers le bas avec Alt + Flèche Bas
vnoremap <A-Down> :m '>+1<CR>gv=gv

" Commenter les lignes sélectionnées
xnoremap <Leader>c :s/^/\/\/ /<CR>gv

" Décommenter les lignes sélectionnées
xnoremap <Leader>u :s/^\/\/ //g<CR>gv
