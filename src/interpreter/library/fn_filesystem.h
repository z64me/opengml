FNDEF1(file_exists, path)
FNDEF1(file_text_open_read, path)
FNDEF1(file_text_open_write, path)
FNDEF1(file_text_open_append, path)
FNDEF1(file_text_read_real, file)
FNDEF1(file_text_read_string, file)
FNDEF1(file_text_readln, file)
FNDEF2(file_text_write_real, file, v)
FNDEF2(file_text_write_string, file, v)
FNDEF1(file_text_writeln, file)
FNDEF1(file_text_eoln, file)
FNDEF1(file_text_eof, file)
FNDEF1(file_text_close, file)

FNDEF2(get_open_filename, filter, fname)
FNDEF4(get_open_filename_ext, filter, fname, dir, caption)
FNDEF2(get_save_filename, filter, fname)
FNDEF4(get_save_filename_ext, filter, fname, dir, caption)

FNDEF1(directory_create, dir)
FNDEF1(directory_exists, dir)
FNDEF1(directory_destroy, dir)

GETVAR(working_directory)
GETVAR(program_directory)
GETVAR(temp_directory)
