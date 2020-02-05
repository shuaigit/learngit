filetype off
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()

Plugin 'VundleVim/Vundle.vim'
Plugin 'nanotech/jellybeans.vim'
Plugin 'vim-airline/vim-airline'
Plugin 'vim-airline/vim-airline-themes'

call vundle#end()

filetype plugin on
filetype indent on


set number
syntax on
set mouse=n
set encoding=utf-8
set t_Co=256
colorscheme jellybeans
set cursorline
set showcmd
set softtabstop=4
set autoindent
set shiftwidth=4

inoremap < <><ESC>i
inoremap ( ()<ESC>i
inoremap { {<CR>}<ESC>O
inoremap ' ''<ESC>i
inoremap " ""<ESC>i
