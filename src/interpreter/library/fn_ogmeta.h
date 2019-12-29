// OpenGML-only functions.

FNDEF0(ogm_get_prg_end)
FNDEF0(ogm_get_prg_reset)
FNDEF1(ogm_set_prg_end, v)
FNDEF1(ogm_set_prg_reset, v)
FNDEF3(ogm_display_create, width, height, caption)
FNDEF1(ogm_display_destroy, display)
FNDEF1(ogm_ptr_is_null, ptr)
FNDEF0(ogm_phase_input)
FNDEF2(ogm_phase, ev, subev)
FNDEF2(ogm_phase_draw, ev, subev)
FNDEF2(ogm_phase_draw_all, ev, subev)
FNDEF0(ogm_async_network_update)
FNDEF0(ogm_display_process_input)
FNDEF0(ogm_display_render_begin)
FNDEF0(ogm_display_render_clear)
FNDEF0(ogm_display_render_end)
FNDEF0(ogm_display_close_requested)
FNDEF0(ogm_display_bind_assets)
FNDEF5(ogm_display_set_matrix_view, x1, x2, y1, y2, angle)
FNDEF0(ogm_display_reset_matrix_projection)
FNDEF0(ogm_display_reset_matrix_model)
FNDEF0(ogm_sort_instances)
FNDEF1(ogm_room_goto_immediate, room)
FNDEF0(ogm_debug_start)
FNDEF0(ogm_suspend)
FNDEF2(ogm_ds_info, type, list)
FNDEF0(ogm_application_surface_is_draw_enabled)
FNDEF0(ogm_surface_reset_target_all)
FNDEF0(ogm_target_view_projection_enable)
FNDEF0(ogm_create_application_surface)
FNDEF0(ogm_save_state)
FNDEF0(ogm_load_state)
FNDEF1(ogm_save_state, n)
FNDEF1(ogm_load_state, n)
FNDEF0(ogm_queue_save_state)
FNDEF0(ogm_queue_load_state)
FNDEF0(ogm_save_state_queued)
FNDEF0(ogm_load_state_queued)
VAR(ogm_resimulating)
FNDEF1(_ogm_assert, a)
FNDEF2(_ogm_assert, a, b)
ALIAS(_ogm_assert, ogm_assert)
VAR(ogm_room_queued)

GETVAR(async_load)
