// MESSAGE NMPC_PARAMS PACKING

#define MAVLINK_MSG_ID_NMPC_PARAMS 213

typedef struct MAVLINK_PACKED __mavlink_nmpc_params_t
{
 float R_acpt; /*< Track switch acceptance radius [m]*/
 float ceta_acpt; /*< Cosine of track switch acceptance angle [~]*/
 float k_t_ne; /*< Longitudinal logistic gain*/
 float e_ne_co; /*< Longitudinal logistic cutoff [m]*/
 float k_t_d; /*< Lateral logistic gain*/
 float e_d_co; /*< Lateral logistic cutoff [m]*/
 float eps_v; /*< Unit ground speed threshold [~]*/
 float alpha_p_co; /*< Angle of attack upper cutoff [rad]*/
 float alpha_m_co; /*< Angle of attack lower cutoff [rad]*/
 float alpha_delta_co; /*< Angle of attack cutoff transition length [rad]*/
 float i_e_t_ne_co; /*< Lateral-directional track error integral cutoff [m]*/
 float i_e_t_d_co; /*< Longitudinal track error integral cutoff [m]*/
 float Qdiag[19]; /*< Objective weights*/
} mavlink_nmpc_params_t;

#define MAVLINK_MSG_ID_NMPC_PARAMS_LEN 124
#define MAVLINK_MSG_ID_NMPC_PARAMS_MIN_LEN 124
#define MAVLINK_MSG_ID_213_LEN 124
#define MAVLINK_MSG_ID_213_MIN_LEN 124

#define MAVLINK_MSG_ID_NMPC_PARAMS_CRC 125
#define MAVLINK_MSG_ID_213_CRC 125

#define MAVLINK_MSG_NMPC_PARAMS_FIELD_QDIAG_LEN 19

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_NMPC_PARAMS { \
	213, \
	"NMPC_PARAMS", \
	13, \
	{  { "R_acpt", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_nmpc_params_t, R_acpt) }, \
         { "ceta_acpt", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_nmpc_params_t, ceta_acpt) }, \
         { "k_t_ne", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_nmpc_params_t, k_t_ne) }, \
         { "e_ne_co", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_nmpc_params_t, e_ne_co) }, \
         { "k_t_d", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_nmpc_params_t, k_t_d) }, \
         { "e_d_co", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_nmpc_params_t, e_d_co) }, \
         { "eps_v", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_nmpc_params_t, eps_v) }, \
         { "alpha_p_co", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_nmpc_params_t, alpha_p_co) }, \
         { "alpha_m_co", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_nmpc_params_t, alpha_m_co) }, \
         { "alpha_delta_co", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_nmpc_params_t, alpha_delta_co) }, \
         { "i_e_t_ne_co", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_nmpc_params_t, i_e_t_ne_co) }, \
         { "i_e_t_d_co", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_nmpc_params_t, i_e_t_d_co) }, \
         { "Qdiag", NULL, MAVLINK_TYPE_FLOAT, 19, 48, offsetof(mavlink_nmpc_params_t, Qdiag) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_NMPC_PARAMS { \
	"NMPC_PARAMS", \
	13, \
	{  { "R_acpt", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_nmpc_params_t, R_acpt) }, \
         { "ceta_acpt", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_nmpc_params_t, ceta_acpt) }, \
         { "k_t_ne", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_nmpc_params_t, k_t_ne) }, \
         { "e_ne_co", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_nmpc_params_t, e_ne_co) }, \
         { "k_t_d", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_nmpc_params_t, k_t_d) }, \
         { "e_d_co", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_nmpc_params_t, e_d_co) }, \
         { "eps_v", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_nmpc_params_t, eps_v) }, \
         { "alpha_p_co", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_nmpc_params_t, alpha_p_co) }, \
         { "alpha_m_co", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_nmpc_params_t, alpha_m_co) }, \
         { "alpha_delta_co", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_nmpc_params_t, alpha_delta_co) }, \
         { "i_e_t_ne_co", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_nmpc_params_t, i_e_t_ne_co) }, \
         { "i_e_t_d_co", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_nmpc_params_t, i_e_t_d_co) }, \
         { "Qdiag", NULL, MAVLINK_TYPE_FLOAT, 19, 48, offsetof(mavlink_nmpc_params_t, Qdiag) }, \
         } \
}
#endif

/**
 * @brief Pack a nmpc_params message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param R_acpt Track switch acceptance radius [m]
 * @param ceta_acpt Cosine of track switch acceptance angle [~]
 * @param k_t_ne Longitudinal logistic gain
 * @param e_ne_co Longitudinal logistic cutoff [m]
 * @param k_t_d Lateral logistic gain
 * @param e_d_co Lateral logistic cutoff [m]
 * @param eps_v Unit ground speed threshold [~]
 * @param alpha_p_co Angle of attack upper cutoff [rad]
 * @param alpha_m_co Angle of attack lower cutoff [rad]
 * @param alpha_delta_co Angle of attack cutoff transition length [rad]
 * @param i_e_t_ne_co Lateral-directional track error integral cutoff [m]
 * @param i_e_t_d_co Longitudinal track error integral cutoff [m]
 * @param Qdiag Objective weights
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_nmpc_params_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float R_acpt, float ceta_acpt, float k_t_ne, float e_ne_co, float k_t_d, float e_d_co, float eps_v, float alpha_p_co, float alpha_m_co, float alpha_delta_co, float i_e_t_ne_co, float i_e_t_d_co, const float *Qdiag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_NMPC_PARAMS_LEN];
	_mav_put_float(buf, 0, R_acpt);
	_mav_put_float(buf, 4, ceta_acpt);
	_mav_put_float(buf, 8, k_t_ne);
	_mav_put_float(buf, 12, e_ne_co);
	_mav_put_float(buf, 16, k_t_d);
	_mav_put_float(buf, 20, e_d_co);
	_mav_put_float(buf, 24, eps_v);
	_mav_put_float(buf, 28, alpha_p_co);
	_mav_put_float(buf, 32, alpha_m_co);
	_mav_put_float(buf, 36, alpha_delta_co);
	_mav_put_float(buf, 40, i_e_t_ne_co);
	_mav_put_float(buf, 44, i_e_t_d_co);
	_mav_put_float_array(buf, 48, Qdiag, 19);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NMPC_PARAMS_LEN);
#else
	mavlink_nmpc_params_t packet;
	packet.R_acpt = R_acpt;
	packet.ceta_acpt = ceta_acpt;
	packet.k_t_ne = k_t_ne;
	packet.e_ne_co = e_ne_co;
	packet.k_t_d = k_t_d;
	packet.e_d_co = e_d_co;
	packet.eps_v = eps_v;
	packet.alpha_p_co = alpha_p_co;
	packet.alpha_m_co = alpha_m_co;
	packet.alpha_delta_co = alpha_delta_co;
	packet.i_e_t_ne_co = i_e_t_ne_co;
	packet.i_e_t_d_co = i_e_t_d_co;
	mav_array_memcpy(packet.Qdiag, Qdiag, sizeof(float)*19);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NMPC_PARAMS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_NMPC_PARAMS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_NMPC_PARAMS_MIN_LEN, MAVLINK_MSG_ID_NMPC_PARAMS_LEN, MAVLINK_MSG_ID_NMPC_PARAMS_CRC);
}

/**
 * @brief Pack a nmpc_params message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param R_acpt Track switch acceptance radius [m]
 * @param ceta_acpt Cosine of track switch acceptance angle [~]
 * @param k_t_ne Longitudinal logistic gain
 * @param e_ne_co Longitudinal logistic cutoff [m]
 * @param k_t_d Lateral logistic gain
 * @param e_d_co Lateral logistic cutoff [m]
 * @param eps_v Unit ground speed threshold [~]
 * @param alpha_p_co Angle of attack upper cutoff [rad]
 * @param alpha_m_co Angle of attack lower cutoff [rad]
 * @param alpha_delta_co Angle of attack cutoff transition length [rad]
 * @param i_e_t_ne_co Lateral-directional track error integral cutoff [m]
 * @param i_e_t_d_co Longitudinal track error integral cutoff [m]
 * @param Qdiag Objective weights
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_nmpc_params_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float R_acpt,float ceta_acpt,float k_t_ne,float e_ne_co,float k_t_d,float e_d_co,float eps_v,float alpha_p_co,float alpha_m_co,float alpha_delta_co,float i_e_t_ne_co,float i_e_t_d_co,const float *Qdiag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_NMPC_PARAMS_LEN];
	_mav_put_float(buf, 0, R_acpt);
	_mav_put_float(buf, 4, ceta_acpt);
	_mav_put_float(buf, 8, k_t_ne);
	_mav_put_float(buf, 12, e_ne_co);
	_mav_put_float(buf, 16, k_t_d);
	_mav_put_float(buf, 20, e_d_co);
	_mav_put_float(buf, 24, eps_v);
	_mav_put_float(buf, 28, alpha_p_co);
	_mav_put_float(buf, 32, alpha_m_co);
	_mav_put_float(buf, 36, alpha_delta_co);
	_mav_put_float(buf, 40, i_e_t_ne_co);
	_mav_put_float(buf, 44, i_e_t_d_co);
	_mav_put_float_array(buf, 48, Qdiag, 19);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NMPC_PARAMS_LEN);
#else
	mavlink_nmpc_params_t packet;
	packet.R_acpt = R_acpt;
	packet.ceta_acpt = ceta_acpt;
	packet.k_t_ne = k_t_ne;
	packet.e_ne_co = e_ne_co;
	packet.k_t_d = k_t_d;
	packet.e_d_co = e_d_co;
	packet.eps_v = eps_v;
	packet.alpha_p_co = alpha_p_co;
	packet.alpha_m_co = alpha_m_co;
	packet.alpha_delta_co = alpha_delta_co;
	packet.i_e_t_ne_co = i_e_t_ne_co;
	packet.i_e_t_d_co = i_e_t_d_co;
	mav_array_memcpy(packet.Qdiag, Qdiag, sizeof(float)*19);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NMPC_PARAMS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_NMPC_PARAMS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_NMPC_PARAMS_MIN_LEN, MAVLINK_MSG_ID_NMPC_PARAMS_LEN, MAVLINK_MSG_ID_NMPC_PARAMS_CRC);
}

/**
 * @brief Encode a nmpc_params struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param nmpc_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_nmpc_params_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_nmpc_params_t* nmpc_params)
{
	return mavlink_msg_nmpc_params_pack(system_id, component_id, msg, nmpc_params->R_acpt, nmpc_params->ceta_acpt, nmpc_params->k_t_ne, nmpc_params->e_ne_co, nmpc_params->k_t_d, nmpc_params->e_d_co, nmpc_params->eps_v, nmpc_params->alpha_p_co, nmpc_params->alpha_m_co, nmpc_params->alpha_delta_co, nmpc_params->i_e_t_ne_co, nmpc_params->i_e_t_d_co, nmpc_params->Qdiag);
}

/**
 * @brief Encode a nmpc_params struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param nmpc_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_nmpc_params_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_nmpc_params_t* nmpc_params)
{
	return mavlink_msg_nmpc_params_pack_chan(system_id, component_id, chan, msg, nmpc_params->R_acpt, nmpc_params->ceta_acpt, nmpc_params->k_t_ne, nmpc_params->e_ne_co, nmpc_params->k_t_d, nmpc_params->e_d_co, nmpc_params->eps_v, nmpc_params->alpha_p_co, nmpc_params->alpha_m_co, nmpc_params->alpha_delta_co, nmpc_params->i_e_t_ne_co, nmpc_params->i_e_t_d_co, nmpc_params->Qdiag);
}

/**
 * @brief Send a nmpc_params message
 * @param chan MAVLink channel to send the message
 *
 * @param R_acpt Track switch acceptance radius [m]
 * @param ceta_acpt Cosine of track switch acceptance angle [~]
 * @param k_t_ne Longitudinal logistic gain
 * @param e_ne_co Longitudinal logistic cutoff [m]
 * @param k_t_d Lateral logistic gain
 * @param e_d_co Lateral logistic cutoff [m]
 * @param eps_v Unit ground speed threshold [~]
 * @param alpha_p_co Angle of attack upper cutoff [rad]
 * @param alpha_m_co Angle of attack lower cutoff [rad]
 * @param alpha_delta_co Angle of attack cutoff transition length [rad]
 * @param i_e_t_ne_co Lateral-directional track error integral cutoff [m]
 * @param i_e_t_d_co Longitudinal track error integral cutoff [m]
 * @param Qdiag Objective weights
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_nmpc_params_send(mavlink_channel_t chan, float R_acpt, float ceta_acpt, float k_t_ne, float e_ne_co, float k_t_d, float e_d_co, float eps_v, float alpha_p_co, float alpha_m_co, float alpha_delta_co, float i_e_t_ne_co, float i_e_t_d_co, const float *Qdiag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_NMPC_PARAMS_LEN];
	_mav_put_float(buf, 0, R_acpt);
	_mav_put_float(buf, 4, ceta_acpt);
	_mav_put_float(buf, 8, k_t_ne);
	_mav_put_float(buf, 12, e_ne_co);
	_mav_put_float(buf, 16, k_t_d);
	_mav_put_float(buf, 20, e_d_co);
	_mav_put_float(buf, 24, eps_v);
	_mav_put_float(buf, 28, alpha_p_co);
	_mav_put_float(buf, 32, alpha_m_co);
	_mav_put_float(buf, 36, alpha_delta_co);
	_mav_put_float(buf, 40, i_e_t_ne_co);
	_mav_put_float(buf, 44, i_e_t_d_co);
	_mav_put_float_array(buf, 48, Qdiag, 19);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NMPC_PARAMS, buf, MAVLINK_MSG_ID_NMPC_PARAMS_MIN_LEN, MAVLINK_MSG_ID_NMPC_PARAMS_LEN, MAVLINK_MSG_ID_NMPC_PARAMS_CRC);
#else
	mavlink_nmpc_params_t packet;
	packet.R_acpt = R_acpt;
	packet.ceta_acpt = ceta_acpt;
	packet.k_t_ne = k_t_ne;
	packet.e_ne_co = e_ne_co;
	packet.k_t_d = k_t_d;
	packet.e_d_co = e_d_co;
	packet.eps_v = eps_v;
	packet.alpha_p_co = alpha_p_co;
	packet.alpha_m_co = alpha_m_co;
	packet.alpha_delta_co = alpha_delta_co;
	packet.i_e_t_ne_co = i_e_t_ne_co;
	packet.i_e_t_d_co = i_e_t_d_co;
	mav_array_memcpy(packet.Qdiag, Qdiag, sizeof(float)*19);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NMPC_PARAMS, (const char *)&packet, MAVLINK_MSG_ID_NMPC_PARAMS_MIN_LEN, MAVLINK_MSG_ID_NMPC_PARAMS_LEN, MAVLINK_MSG_ID_NMPC_PARAMS_CRC);
#endif
}

/**
 * @brief Send a nmpc_params message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_nmpc_params_send_struct(mavlink_channel_t chan, const mavlink_nmpc_params_t* nmpc_params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_nmpc_params_send(chan, nmpc_params->R_acpt, nmpc_params->ceta_acpt, nmpc_params->k_t_ne, nmpc_params->e_ne_co, nmpc_params->k_t_d, nmpc_params->e_d_co, nmpc_params->eps_v, nmpc_params->alpha_p_co, nmpc_params->alpha_m_co, nmpc_params->alpha_delta_co, nmpc_params->i_e_t_ne_co, nmpc_params->i_e_t_d_co, nmpc_params->Qdiag);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NMPC_PARAMS, (const char *)nmpc_params, MAVLINK_MSG_ID_NMPC_PARAMS_MIN_LEN, MAVLINK_MSG_ID_NMPC_PARAMS_LEN, MAVLINK_MSG_ID_NMPC_PARAMS_CRC);
#endif
}

#if MAVLINK_MSG_ID_NMPC_PARAMS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_nmpc_params_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float R_acpt, float ceta_acpt, float k_t_ne, float e_ne_co, float k_t_d, float e_d_co, float eps_v, float alpha_p_co, float alpha_m_co, float alpha_delta_co, float i_e_t_ne_co, float i_e_t_d_co, const float *Qdiag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, R_acpt);
	_mav_put_float(buf, 4, ceta_acpt);
	_mav_put_float(buf, 8, k_t_ne);
	_mav_put_float(buf, 12, e_ne_co);
	_mav_put_float(buf, 16, k_t_d);
	_mav_put_float(buf, 20, e_d_co);
	_mav_put_float(buf, 24, eps_v);
	_mav_put_float(buf, 28, alpha_p_co);
	_mav_put_float(buf, 32, alpha_m_co);
	_mav_put_float(buf, 36, alpha_delta_co);
	_mav_put_float(buf, 40, i_e_t_ne_co);
	_mav_put_float(buf, 44, i_e_t_d_co);
	_mav_put_float_array(buf, 48, Qdiag, 19);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NMPC_PARAMS, buf, MAVLINK_MSG_ID_NMPC_PARAMS_MIN_LEN, MAVLINK_MSG_ID_NMPC_PARAMS_LEN, MAVLINK_MSG_ID_NMPC_PARAMS_CRC);
#else
	mavlink_nmpc_params_t *packet = (mavlink_nmpc_params_t *)msgbuf;
	packet->R_acpt = R_acpt;
	packet->ceta_acpt = ceta_acpt;
	packet->k_t_ne = k_t_ne;
	packet->e_ne_co = e_ne_co;
	packet->k_t_d = k_t_d;
	packet->e_d_co = e_d_co;
	packet->eps_v = eps_v;
	packet->alpha_p_co = alpha_p_co;
	packet->alpha_m_co = alpha_m_co;
	packet->alpha_delta_co = alpha_delta_co;
	packet->i_e_t_ne_co = i_e_t_ne_co;
	packet->i_e_t_d_co = i_e_t_d_co;
	mav_array_memcpy(packet->Qdiag, Qdiag, sizeof(float)*19);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NMPC_PARAMS, (const char *)packet, MAVLINK_MSG_ID_NMPC_PARAMS_MIN_LEN, MAVLINK_MSG_ID_NMPC_PARAMS_LEN, MAVLINK_MSG_ID_NMPC_PARAMS_CRC);
#endif
}
#endif

#endif

// MESSAGE NMPC_PARAMS UNPACKING


/**
 * @brief Get field R_acpt from nmpc_params message
 *
 * @return Track switch acceptance radius [m]
 */
static inline float mavlink_msg_nmpc_params_get_R_acpt(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field ceta_acpt from nmpc_params message
 *
 * @return Cosine of track switch acceptance angle [~]
 */
static inline float mavlink_msg_nmpc_params_get_ceta_acpt(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field k_t_ne from nmpc_params message
 *
 * @return Longitudinal logistic gain
 */
static inline float mavlink_msg_nmpc_params_get_k_t_ne(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field e_ne_co from nmpc_params message
 *
 * @return Longitudinal logistic cutoff [m]
 */
static inline float mavlink_msg_nmpc_params_get_e_ne_co(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field k_t_d from nmpc_params message
 *
 * @return Lateral logistic gain
 */
static inline float mavlink_msg_nmpc_params_get_k_t_d(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field e_d_co from nmpc_params message
 *
 * @return Lateral logistic cutoff [m]
 */
static inline float mavlink_msg_nmpc_params_get_e_d_co(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field eps_v from nmpc_params message
 *
 * @return Unit ground speed threshold [~]
 */
static inline float mavlink_msg_nmpc_params_get_eps_v(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field alpha_p_co from nmpc_params message
 *
 * @return Angle of attack upper cutoff [rad]
 */
static inline float mavlink_msg_nmpc_params_get_alpha_p_co(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field alpha_m_co from nmpc_params message
 *
 * @return Angle of attack lower cutoff [rad]
 */
static inline float mavlink_msg_nmpc_params_get_alpha_m_co(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field alpha_delta_co from nmpc_params message
 *
 * @return Angle of attack cutoff transition length [rad]
 */
static inline float mavlink_msg_nmpc_params_get_alpha_delta_co(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field i_e_t_ne_co from nmpc_params message
 *
 * @return Lateral-directional track error integral cutoff [m]
 */
static inline float mavlink_msg_nmpc_params_get_i_e_t_ne_co(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field i_e_t_d_co from nmpc_params message
 *
 * @return Longitudinal track error integral cutoff [m]
 */
static inline float mavlink_msg_nmpc_params_get_i_e_t_d_co(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field Qdiag from nmpc_params message
 *
 * @return Objective weights
 */
static inline uint16_t mavlink_msg_nmpc_params_get_Qdiag(const mavlink_message_t* msg, float *Qdiag)
{
	return _MAV_RETURN_float_array(msg, Qdiag, 19,  48);
}

/**
 * @brief Decode a nmpc_params message into a struct
 *
 * @param msg The message to decode
 * @param nmpc_params C-struct to decode the message contents into
 */
static inline void mavlink_msg_nmpc_params_decode(const mavlink_message_t* msg, mavlink_nmpc_params_t* nmpc_params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	nmpc_params->R_acpt = mavlink_msg_nmpc_params_get_R_acpt(msg);
	nmpc_params->ceta_acpt = mavlink_msg_nmpc_params_get_ceta_acpt(msg);
	nmpc_params->k_t_ne = mavlink_msg_nmpc_params_get_k_t_ne(msg);
	nmpc_params->e_ne_co = mavlink_msg_nmpc_params_get_e_ne_co(msg);
	nmpc_params->k_t_d = mavlink_msg_nmpc_params_get_k_t_d(msg);
	nmpc_params->e_d_co = mavlink_msg_nmpc_params_get_e_d_co(msg);
	nmpc_params->eps_v = mavlink_msg_nmpc_params_get_eps_v(msg);
	nmpc_params->alpha_p_co = mavlink_msg_nmpc_params_get_alpha_p_co(msg);
	nmpc_params->alpha_m_co = mavlink_msg_nmpc_params_get_alpha_m_co(msg);
	nmpc_params->alpha_delta_co = mavlink_msg_nmpc_params_get_alpha_delta_co(msg);
	nmpc_params->i_e_t_ne_co = mavlink_msg_nmpc_params_get_i_e_t_ne_co(msg);
	nmpc_params->i_e_t_d_co = mavlink_msg_nmpc_params_get_i_e_t_d_co(msg);
	mavlink_msg_nmpc_params_get_Qdiag(msg, nmpc_params->Qdiag);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_NMPC_PARAMS_LEN? msg->len : MAVLINK_MSG_ID_NMPC_PARAMS_LEN;
        memset(nmpc_params, 0, MAVLINK_MSG_ID_NMPC_PARAMS_LEN);
	memcpy(nmpc_params, _MAV_PAYLOAD(msg), len);
#endif
}
