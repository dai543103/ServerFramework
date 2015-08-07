// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GameProtocol.MsgID.proto

#ifndef PROTOBUF_GameProtocol_2eMsgID_2eproto__INCLUDED
#define PROTOBUF_GameProtocol_2eMsgID_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_GameProtocol_2eMsgID_2eproto();
void protobuf_AssignDesc_GameProtocol_2eMsgID_2eproto();
void protobuf_ShutdownFile_GameProtocol_2eMsgID_2eproto();


enum ProtocolMsgID {
  MSGID_PROTOCOL_INVALID_MSG = 0,
  MSGID_ACCOUNT_CREATEROLE_REQUEST = 1000,
  MSGID_ACCOUNT_CREATEROLE_RESPONSE = 1001,
  MSGID_ACCOUNT_LISTZONE_REQUEST = 1002,
  MSGID_ACCOUNT_LISTZONE_RESPONSE = 1003,
  MSGID_ACCOUNT_DELETEROLE_REQUEST = 1004,
  MSGID_ACCOUNT_DELETEROLE_RESPONSE = 1005,
  MSGID_ACCOUNT_LISTROLE_REQUEST = 1006,
  MSGID_ACCOUNT_LISTROLE_RESPONSE = 1007,
  MSGID_LOGOUTSERVER_REQUEST = 1008,
  MSGID_LOGOUTSERVER_RESPONSE = 1009,
  MSGID_ADDNEWNAME_REQUEST = 1010,
  MSGID_ADDNEWNAME_RESPONSE = 1011,
  MSGID_DELETENAME_REQUEST = 1012,
  MSGID_DELETENAME_RESPONSE = 1013,
  MSGID_ACCOUNTDB_ADDACCOUNT_REQUEST = 1080,
  MSGID_ACCOUNTDB_ADDACCOUNT_RESPONSE = 1081,
  MSGID_ACCOUNTDB_DELETE_REQUEST = 1082,
  MSGID_ACCOUNTDB_DELETE_RESPONSE = 1083,
  MSGID_ACCOUNTDB_FETCH_REQUEST = 1084,
  MSGID_ACCOUNTDB_FETCH_RESPONSE = 1085,
  MSGID_ACCOUNTDB_UPDATE_REQUEST = 1086,
  MSGID_ACCOUNTDB_UPDATE_RESPONSE = 1087,
  MSGID_REGAUTH_REGACCOUNT_REQUEST = 1091,
  MSGID_REGAUTH_REGACCOUNT_RESPONSE = 1092,
  MSGID_REGAUTH_AUTHACCOUNT_REQUEST = 1093,
  MSGID_REGAUTH_AUTHACCOUNT_RESPONSE = 1904,
  MSGID_REGAUTH_UPDATE_REQUEST = 1905,
  MSGID_REGAUTH_UPDATE_RESPONSE = 1906,
  MSGID_WORLD_ZONECHANGED_NOTIFY = 1110,
  MSGID_WORLD_CREATEROLE_REQUEST = 1111,
  MSGID_WORLD_CREATEROLE_RESPONSE = 1112,
  MSGID_WORLD_FETCHROLE_REQUEST = 1113,
  MSGID_WORLD_FETCHROLE_RESPONSE = 1114,
  MSGID_WORLD_UPDATEROLE_REQUEST = 1115,
  MSGID_WORLD_UPDATEROLE_RESPONSE = 1116,
  MSGID_WORLD_KICKROLE_REQUEST = 1117,
  MSGID_WORLD_KICKROLE_RESPONSE = 1118,
  MSGID_WORLD_ONLINESTAT_REQUEST = 1119,
  MSGID_WORLD_ONLINESTAT_RESPONSE = 1120,
  MSGID_WORLD_CHAT_NOTIFY = 1121,
  MSGID_ZONE_LOGOUT_NOTIFY = 1300,
  MSGID_ZONE_FRIENDINFO_REQUEST = 1301,
  MSGID_ZONE_FRIENDINFO_RESPONSE = 1302,
  MSGID_ZONE_LOGINSERVER_REQUEST = 1303,
  MSGID_ZONE_LOGINSERVER_RESPONSE = 1304,
  MSGID_ZONE_ONLINEROLENUM_REQUEST = 1305,
  MSGID_ZONE_GAMEMASTER_REQUEST = 1306,
  MSGID_ZONE_GAMEMASTER_RESPONSE = 1307,
  MSGID_ZONE_LOGINSERVER_NOTIFY = 1311,
  MSGID_ZONE_REPOPERA_REQUEST = 1318,
  MSGID_ZONE_REPOPERA_RESPONSE = 1319,
  MSGID_ZONE_GETREPINFO_REQUEST = 1320,
  MSGID_ZONE_GETREPINFO_RESPONSE = 1321,
  MSGID_ZONE_WEAREQUIP_REQUEST = 1322,
  MSGID_ZONE_WEAREQUIP_RESPONSE = 1323,
  MSGID_ZONE_REPCHANGE_NOTIFY = 1324,
  MSGID_ZONE_CHAT_REQUEST = 1330,
  MSGID_ZONE_CHAT_RESPONSE = 1331,
  MSGID_ZONE_SELLITEM_REQUEST = 1332,
  MSGID_ZONE_SELLITEM_RESPONSE = 1333,
  MSGID_ZONE_DOCOMBAT_REQUEST = 1334,
  MSGID_ZONE_DOCOMBAT_RESPONSE = 1335,
  MSGID_ZONE_COMBATMOVE_REUQEST = 1336,
  MSGID_ZONE_COMBATMOVE_RESPONSE = 1337,
  MSGID_ZONE_COMBATACTION_REQUEST = 1338,
  MSGID_ZONE_COMBATACTION_RESPONSE = 1339,
  MSGID_ZONE_BATTLEFIELD_NOTIFY = 1344,
  MSGID_ZONE_COMBATMOVE_NOTIFY = 1345,
  MSGID_ZONE_COMBATACTION_NOTIFY = 1346,
  MSGID_ZONE_FINCOMBAT_NOTIFY = 1347,
  MSGID_ZONE_UNITDIRECTIVE_NOTIFY = 1359,
  MSGID_ZONE_UPDATEPARTNERAI_REQUEST = 1366,
  MSGID_ZONE_UPDATEPARTNERAI_RESPONSE = 1367,
  MSGID_ZONE_COMBATADDBUFF_NOTIFY = 1368,
  MSGID_ZONE_DOBUFFEFFECT_NOTIFY = 1369,
  MSGID_ZONE_REMOVEBUFF_NOTIFY = 1370,
  MSGID_ZONE_ADDCOMBATUNIT_NOTIFY = 1403,
  MSGID_ZONE_KILLCOMBATUNIT_NOTIFY = 1404,
  MSGID_ZONE_FIGHTATTR_NOTIFY = 1406,
  MSGID_ZONE_ADDCOMBATTRAP_NOTIFY = 1409,
  MSGID_ZONE_TRIGGERTRAP_NOTIFY = 1410,
  MSGID_ZONE_DELETECOMBATTRAP_NOTIFY = 1411,
  MSGID_ZONE_UNITATTRCHANGE_NOTIFY = 1412,
  MSGID_ZONE_STARTPVPCOMBAT_REQUEST = 1413,
  MSGID_ZONE_STARTPVPCOMBAT_RESPONSE = 1414,
  MSGID_ZONE_STARTPVPCOMBAT_NBOTIFY = 1415,
  MSGID_ZONE_ACCEPTPVPCOMBAT_REQUEST = 1416,
  MSGID_ZONE_ACCEPTPVPCOMBAT_RESPONSE = 1417,
  MSGID_ZONE_BEGINCOMBATACTION_NOTIFY = 1418,
  MSGID_ZONE_SETCOMBATFORM_REQUEST = 1424,
  MSGID_ZONE_SETCOMBATFORM_RESPONSE = 1425,
  MSGID_ZONE_SETCOMBATFORM_NOTIFY = 1426,
  MSGID_ZONE_REJECTPVPCOMBAT_NOTIFY = 1431,
  MSGID_ZONE_DECREASEUNITBUFF_NOTIFY = 1432,
  MSGID_ZONE_ACTIONUNITINFO_NOTIFY = 1433,
  MSGID_ZONE_SKILLCDROUND_NOTIFY = 1444
};
bool ProtocolMsgID_IsValid(int value);
const ProtocolMsgID ProtocolMsgID_MIN = MSGID_PROTOCOL_INVALID_MSG;
const ProtocolMsgID ProtocolMsgID_MAX = MSGID_REGAUTH_UPDATE_RESPONSE;
const int ProtocolMsgID_ARRAYSIZE = ProtocolMsgID_MAX + 1;

const ::google::protobuf::EnumDescriptor* ProtocolMsgID_descriptor();
inline const ::std::string& ProtocolMsgID_Name(ProtocolMsgID value) {
  return ::google::protobuf::internal::NameOfEnum(
    ProtocolMsgID_descriptor(), value);
}
inline bool ProtocolMsgID_Parse(
    const ::std::string& name, ProtocolMsgID* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ProtocolMsgID>(
    ProtocolMsgID_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ProtocolMsgID>() {
  return ::ProtocolMsgID_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_GameProtocol_2eMsgID_2eproto__INCLUDED