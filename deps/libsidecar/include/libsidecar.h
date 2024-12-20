/* Code generated by cmd/cgo; DO NOT EDIT. */

/* package github.com/walkline/ToCloud9/game-server/libsidecar */


#line 1 "cgo-builtin-export-prolog"

#include <stddef.h>

#ifndef GO_CGO_EXPORT_PROLOGUE_H
#define GO_CGO_EXPORT_PROLOGUE_H

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef struct { const char *p; ptrdiff_t n; } _GoString_;
#endif

#endif

/* Start of preamble from import "C" comments.  */


#line 3 "events-group.go"

#include "events-group.h"

#line 1 "cgo-generated-wrapper"

#line 3 "events-guilds.go"

#include "events-guild.h"

#line 1 "cgo-generated-wrapper"

#line 3 "events-servers-registry.go"

#include "events-servers-registry.h"

#line 1 "cgo-generated-wrapper"



#line 16 "lib.go"

#include <stdint.h>

#line 1 "cgo-generated-wrapper"

#line 3 "monitoring.go"

#include "monitoring.h"

#line 1 "cgo-generated-wrapper"

#line 3 "player-interactions-api.go"

#include "player-interactions-api.h"

#line 1 "cgo-generated-wrapper"

#line 3 "player-items-api.go"

#include "player-items-api.h"

#line 1 "cgo-generated-wrapper"

#line 3 "player-money-api.go"

#include "player-money-api.h"

#line 1 "cgo-generated-wrapper"


/* End of preamble from import "C" comments.  */


/* Start of boilerplate cgo prologue.  */
#line 1 "cgo-gcc-export-header-prolog"

#ifndef GO_CGO_PROLOGUE_H
#define GO_CGO_PROLOGUE_H

typedef signed char GoInt8;
typedef unsigned char GoUint8;
typedef short GoInt16;
typedef unsigned short GoUint16;
typedef int GoInt32;
typedef unsigned int GoUint32;
typedef long long GoInt64;
typedef unsigned long long GoUint64;
typedef GoInt64 GoInt;
typedef GoUint64 GoUint;
typedef size_t GoUintptr;
typedef float GoFloat32;
typedef double GoFloat64;
#ifdef _MSC_VER
#include <complex.h>
typedef _Fcomplex GoComplex64;
typedef _Dcomplex GoComplex128;
#else
typedef float _Complex GoComplex64;
typedef double _Complex GoComplex128;
#endif

/*
  static assertion to make sure the file is being used on architecture
  at least with matching size of GoInt.
*/
typedef char _check_for_64_bit_pointer_matching_GoInt[sizeof(void*)==64/8 ? 1:-1];

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef _GoString_ GoString;
#endif
typedef void *GoMap;
typedef void *GoChan;
typedef struct { void *t; void *v; } GoInterface;
typedef struct { void *data; GoInt len; GoInt cap; } GoSlice;

#endif

/* End of boilerplate cgo prologue.  */

#ifdef __cplusplus
extern "C" {
#endif


// TC9SetOnGroupCreatedHook sets hook for group created event.
//
extern void TC9SetOnGroupCreatedHook(OnGroupCreatedHook h);

// TC9SetOnGroupMemberAddedHook sets hook for member added event.
//
extern void TC9SetOnGroupMemberAddedHook(OnGroupMemberAddedHook h);

// TC9SetOnGroupMemberRemovedHook sets hook for member left/kicked event.
//
extern void TC9SetOnGroupMemberRemovedHook(OnGroupMemberRemovedHook h);

// TC9SetOnGroupDisbandedHook sets hook for group disbanded event.
//
extern void TC9SetOnGroupDisbandedHook(OnGroupDisbandedHook h);

// TC9SetOnGroupLootTypeChangedHook sets hook for group loot type changed event.
//
extern void TC9SetOnGroupLootTypeChangedHook(OnGroupLootTypeChangedHook h);

// TC9SetOnGroupDungeonDifficultyChangedHook sets hook for group dungeon difficulty changed event.
//
extern void TC9SetOnGroupDungeonDifficultyChangedHook(OnGroupDungeonDifficultyChangedHook h);

// TC9SetOnGroupRaidDifficultyChangedHook sets hook for group raid difficulty changed event.
//
extern void TC9SetOnGroupRaidDifficultyChangedHook(OnGroupRaidDifficultyChangedHook h);

// TC9SetOnGroupConvertedToRaidHook sets hook for group converted to raid event.
//
extern void TC9SetOnGroupConvertedToRaidHook(OnGroupConvertedToRaidHook h);

// TC9SetOnGuildMemberAddedHook sets hook for guild member added event.
//
extern void TC9SetOnGuildMemberAddedHook(OnGuildMemberAddedHook h);

// TC9SetOnGuildMemberRemovedHook sets hook for guild member removed (kicked) event.
//
extern void TC9SetOnGuildMemberRemovedHook(OnGuildMemberRemovedHook h);

// TC9SetOnGuildMemberLeftHook sets hook for guild member left event.
//
extern void TC9SetOnGuildMemberLeftHook(OnGuildMemberLeftHook h);

// TC9SetOnMapsReassignedHook sets hook for maps reassigning by servers registry event.
//
extern void TC9SetOnMapsReassignedHook(OnMapsReassignedHook h);

// TC9ProcessEventsHooks calls all events hooks.
//
extern void TC9ProcessEventsHooks();

// TC9GetNextAvailableCharacterGuid returns next available characters GUID. Thread unsafe.
//
extern GoUint64 TC9GetNextAvailableCharacterGuid();

// TC9GetNextAvailableItemGuid returns next available item GUID. Thread unsafe.
//
extern GoUint64 TC9GetNextAvailableItemGuid();

// TC9GetNextAvailableInstanceGuid returns next available dungeon/raid instance GUID. Thread unsafe.
//
extern GoUint64 TC9GetNextAvailableInstanceGuid();

// TC9InitLib inits lib by starting services like grpc and healthcheck.
// Adds game server to the servers registry that will make this server visible for game load balancer.
//
extern void TC9InitLib(GoUint16 port, GoUint32 realmID, char* availableMaps, uint32_t** assignedMaps, int* assignedMapsSize);

// TC9GracefulShutdown gracefully stops all running services.
//
extern void TC9GracefulShutdown();

// TC9ProcessGRPCOrHTTPRequests calls all grpc or http handlers in queue.
//
extern void TC9ProcessGRPCOrHTTPRequests();

// TC9ReadyToAcceptPlayersFromMaps notifies servers registry that this server
// loaded maps related data and ready to accept players from those maps.
//
extern void TC9ReadyToAcceptPlayersFromMaps(uint32_t* maps, int mapsLen);

// TC9SetMonitoringDataCollectorHandler sets handler for getting data to handle monitoring request.
//
extern void TC9SetMonitoringDataCollectorHandler(MonitoringDataCollectorHandler h);

// TC9SetCanPlayerInteractWithNPCAndFlagsHandler sets handler for can player interact with NPC and with given NPC flags request.
//
extern void TC9SetCanPlayerInteractWithNPCAndFlagsHandler(CanPlayerInteractWithNPCAndFlagsHandler h);

// TC9SetCanPlayerInteractWithGOAndTypeHandler sets handler for can player interact with GameObject and with given object type request.
//
extern void TC9SetCanPlayerInteractWithGOAndTypeHandler(CanPlayerInteractWithGOAndTypeHandler h);

// TC9SetGetPlayerItemsByGuidsHandler sets handler for getting players item by guids request.
extern void TC9SetGetPlayerItemsByGuidsHandler(GetPlayerItemsByGuidsHandler h);

// TC9SetRemoveItemsWithGuidsFromPlayerHandler sets handler for removing items by guids from player request.
extern void TC9SetRemoveItemsWithGuidsFromPlayerHandler(RemoveItemsWithGuidsFromPlayerHandler h);

// TC9SetAddExistingItemToPlayerHandler sets handler for adding item to player request.
extern void TC9SetAddExistingItemToPlayerHandler(AddExistingItemToPlayerHandler h);

// TC9SetGetMoneyForPlayerHandler sets handler for getting money for player request.
//
extern void TC9SetGetMoneyForPlayerHandler(GetMoneyForPlayerHandler h);

// TC9SetModifyMoneyForPlayerHandler sets handler for modify money for given player request.
//
extern void TC9SetModifyMoneyForPlayerHandler(ModifyMoneyForPlayerHandler h);

#ifdef __cplusplus
}
#endif
