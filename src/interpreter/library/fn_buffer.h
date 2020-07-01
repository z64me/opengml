FNDEF3(buffer_create, size, type, align)
FNDEF1(buffer_delete, id)
FNDEF1(buffer_exists, id)
FNDEF1(buffer_get_alignment, id)
FNDEF1(buffer_get_type, id)
FNDEF2(buffer_read, id, type)
FNDEF3(buffer_write, id, type, value)
FNDEF1(buffer_tell, id)
FNDEF3(buffer_seek, id, base, offset)
FNDEF3(buffer_peek, id, offset, type)
FNDEF4(buffer_poke, id, offset, type, value)
FNDEF1(buffer_get_address, id)
FNDEF1(buffer_load, filename)
FNDEF2(buffer_save, buff, filename)
FNDEF4(buffer_save_ext, buff, filename, offset, size)
FNDEF1(buffer_get_size, id)
FNDEF5(buffer_copy, src, srcoff, len, dst, dstoff)
FNDEF5(buffer_fill, id, offset, type, value, size)
FNDEF1(game_save_buffer, buffer)
FNDEF1(game_load_buffer, buffer)
FNDEF1(buffer_sizeof, type)

CONST(buffer_fixed, 0)
CONST(buffer_grow, 1)
CONST(buffer_wrap, 2)
CONST(buffer_fast, 3)
CONST(buffer_vbuffer, 4)

CONST(buffer_u8, 0)
CONST(buffer_s8, 1)
CONST(buffer_u16, 2)
CONST(buffer_s16, 3)
CONST(buffer_u32, 4)
CONST(buffer_s32, 5)
CONST(buffer_u64, 6)
CONST(buffer_f16, 7)
CONST(buffer_f32, 8)
CONST(buffer_f64, 9)
CONST(buffer_bool, 10)
CONST(buffer_string, 11)
CONST(buffer_text, 12)

CONST(buffer_seek_start, 0)
CONST(buffer_seek_relative, 1)
CONST(buffer_seek_end, 2)
