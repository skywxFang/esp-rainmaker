.. File automatically generated by 'gen-dxd.py'

Header File
^^^^^^^^^^^

* :component_file:`rmaker_common/include/esp_rmaker_cmd_resp.h`

Functions
^^^^^^^^^

.. doxygenfunction:: esp_rmaker_cmd_response_handler
.. doxygenfunction:: esp_rmaker_cmd_register
.. doxygenfunction:: esp_rmaker_cmd_deregister
.. doxygenfunction:: esp_rmaker_cmd_prepare_empty_response
.. doxygenfunction:: esp_rmaker_cmd_resp_test_send
.. doxygenfunction:: esp_rmaker_cmd_resp_parse_response

Structures
^^^^^^^^^^

.. doxygenstruct:: esp_rmaker_cmd_ctx_t
    :members:


Macros
^^^^^^

.. doxygendefine:: ESP_RMAKER_USER_ROLE_SUPER_ADMIN
.. doxygendefine:: ESP_RMAKER_USER_ROLE_PRIMARY_USER
.. doxygendefine:: ESP_RMAKER_USER_ROLE_SECONDARY_USER
.. doxygendefine:: REQ_ID_LEN

Type Definitions
^^^^^^^^^^^^^^^^

.. doxygentypedef:: esp_rmaker_cmd_handler_t
.. doxygentypedef:: esp_rmaker_cmd_send_t

Enumerations
^^^^^^^^^^^^

.. doxygenenum:: esp_rmaker_tlv_type_t
.. doxygenenum:: esp_rmaker_cmd_status_t
.. doxygenenum:: esp_rmaker_cmd_t
