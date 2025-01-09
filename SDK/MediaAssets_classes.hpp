#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MediaAssets

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "MediaAssets_structs.hpp"


namespace SDK
{

// Class MediaAssets.MediaPlayer
// 0x0138 (0x0160 - 0x0028)
class UMediaPlayer final : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnEndReached;                                      // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnMediaClosed;                                     // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnMediaOpened;                                     // 0x0050(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnMediaOpenFailed;                                 // 0x0060(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnPlaybackResumed;                                 // 0x0070(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                   OnPlaybackSuspended;                               // 0x0080(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FName                                   DesiredPlayerName;                                 // 0x0090(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PlayOnOpen;                                        // 0x0098(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         Shuffle : 1;                                       // 0x009C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Loop : 1;                                          // 0x009C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaPlaylist*                         Playlist;                                          // 0x00A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         PlaylistIndex;                                     // 0x00A8(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaSoundWave*                        SoundWave;                                         // 0x00B0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMediaTexture*                          VideoTexture;                                      // 0x00B8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_C0[0xA0];                                      // 0x00C0(0x00A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool CanPlayUrl(const class FString& URL);
	void Close();
	struct FFloatRange GetForwardRates(bool Unthinned);
	struct FFloatRange GetReverseRates(bool Unthinned);
	bool Next();
	bool OpenFile(const class FString& FilePath);
	bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
	bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32 Index_0);
	bool OpenSource(class UMediaSource* MediaSource);
	bool OpenUrl(const class FString& URL);
	bool Pause();
	bool Play();
	bool Previous();
	bool Reopen();
	bool Rewind();
	bool Seek(const struct FTimespan& InTime);
	bool SelectTrack(EMediaPlayerTrack TrackType, int32 TrackIndex);
	bool SetLooping(bool InLooping);
	bool SetRate(float Rate);
	void SetSoundWave(class UMediaSoundWave* NewSoundWave);
	void SetVideoTexture(class UMediaTexture* NewTexture);

	bool CanPause() const;
	void GetCaptions(TArray<struct FMediaPlayerOverlay>* OutCaptions) const;
	struct FTimespan GetDuration() const;
	int32 GetNumTracks(EMediaPlayerTrack TrackType) const;
	class FName GetPlayerName() const;
	float GetRate() const;
	int32 GetSelectedTrack(EMediaPlayerTrack TrackType) const;
	void GetSubtitles(TArray<struct FMediaPlayerOverlay>* OutSubtitles) const;
	void GetTexts(TArray<struct FMediaPlayerOverlay>* OutTexts) const;
	struct FTimespan GetTime() const;
	class FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
	class FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
	class FString GetUrl() const;
	bool IsLooping() const;
	bool IsPaused() const;
	bool IsPlaying() const;
	bool IsPreparing() const;
	bool IsReady() const;
	bool SupportsRate(float Rate, bool Unthinned) const;
	bool SupportsScrubbing() const;
	bool SupportsSeeking() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlayer">();
	}
	static class UMediaPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaPlayer>();
	}
};
static_assert(alignof(UMediaPlayer) == 0x000008, "Wrong alignment on UMediaPlayer");
static_assert(sizeof(UMediaPlayer) == 0x000160, "Wrong size on UMediaPlayer");
static_assert(offsetof(UMediaPlayer, OnEndReached) == 0x000030, "Member 'UMediaPlayer::OnEndReached' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnMediaClosed) == 0x000040, "Member 'UMediaPlayer::OnMediaClosed' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnMediaOpened) == 0x000050, "Member 'UMediaPlayer::OnMediaOpened' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnMediaOpenFailed) == 0x000060, "Member 'UMediaPlayer::OnMediaOpenFailed' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnPlaybackResumed) == 0x000070, "Member 'UMediaPlayer::OnPlaybackResumed' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnPlaybackSuspended) == 0x000080, "Member 'UMediaPlayer::OnPlaybackSuspended' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, DesiredPlayerName) == 0x000090, "Member 'UMediaPlayer::DesiredPlayerName' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, PlayOnOpen) == 0x000098, "Member 'UMediaPlayer::PlayOnOpen' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, Playlist) == 0x0000A0, "Member 'UMediaPlayer::Playlist' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, PlaylistIndex) == 0x0000A8, "Member 'UMediaPlayer::PlaylistIndex' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, SoundWave) == 0x0000B0, "Member 'UMediaPlayer::SoundWave' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, VideoTexture) == 0x0000B8, "Member 'UMediaPlayer::VideoTexture' has a wrong offset!");

// Class MediaAssets.MediaPlaylist
// 0x0010 (0x0038 - 0x0028)
class UMediaPlaylist final : public UObject
{
public:
	TArray<class UMediaSource*>                   Items;                                             // 0x0028(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

public:
	void Add(class UMediaSource* MediaSource);
	class UMediaSource* Get(int32 Index_0);
	class UMediaSource* GetNext(int32* InOutIndex);
	class UMediaSource* GetPrevious(int32* InOutIndex);
	class UMediaSource* GetRandom(int32* InOutIndex);
	void Insert(class UMediaSource* MediaSource, int32 Index_0);
	int32 Num();
	void Remove(class UMediaSource* MediaSource);
	void RemoveAt(int32 Index_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlaylist">();
	}
	static class UMediaPlaylist* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaPlaylist>();
	}
};
static_assert(alignof(UMediaPlaylist) == 0x000008, "Wrong alignment on UMediaPlaylist");
static_assert(sizeof(UMediaPlaylist) == 0x000038, "Wrong size on UMediaPlaylist");
static_assert(offsetof(UMediaPlaylist, Items) == 0x000028, "Member 'UMediaPlaylist::Items' has a wrong offset!");

// Class MediaAssets.MediaSoundWave
// 0x00E0 (0x0340 - 0x0260)
class UMediaSoundWave final : public USoundWave
{
public:
	uint8                                         Pad_260[0x8];                                      // 0x0260(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AudioTrackIndex;                                   // 0x0268(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_26C[0x4];                                      // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaPlayer*                           MediaPlayer;                                       // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_278[0xC8];                                     // 0x0278(0x00C8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaSoundWave">();
	}
	static class UMediaSoundWave* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaSoundWave>();
	}
};
static_assert(alignof(UMediaSoundWave) == 0x000008, "Wrong alignment on UMediaSoundWave");
static_assert(sizeof(UMediaSoundWave) == 0x000340, "Wrong size on UMediaSoundWave");
static_assert(offsetof(UMediaSoundWave, AudioTrackIndex) == 0x000268, "Member 'UMediaSoundWave::AudioTrackIndex' has a wrong offset!");
static_assert(offsetof(UMediaSoundWave, MediaPlayer) == 0x000270, "Member 'UMediaSoundWave::MediaPlayer' has a wrong offset!");

// Class MediaAssets.MediaSource
// 0x0010 (0x0038 - 0x0028)
class UMediaSource : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   PlayerName;                                        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaSource">();
	}
	static class UMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaSource>();
	}
};
static_assert(alignof(UMediaSource) == 0x000008, "Wrong alignment on UMediaSource");
static_assert(sizeof(UMediaSource) == 0x000038, "Wrong size on UMediaSource");
static_assert(offsetof(UMediaSource, PlayerName) == 0x000030, "Member 'UMediaSource::PlayerName' has a wrong offset!");

// Class MediaAssets.FileMediaSource
// 0x0018 (0x0050 - 0x0038)
class UFileMediaSource final : public UMediaSource
{
public:
	class FString                                 FilePath;                                          // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PrecacheFile;                                      // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetFilePath(const class FString& path);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FileMediaSource">();
	}
	static class UFileMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFileMediaSource>();
	}
};
static_assert(alignof(UFileMediaSource) == 0x000008, "Wrong alignment on UFileMediaSource");
static_assert(sizeof(UFileMediaSource) == 0x000050, "Wrong size on UFileMediaSource");
static_assert(offsetof(UFileMediaSource, FilePath) == 0x000038, "Member 'UFileMediaSource::FilePath' has a wrong offset!");
static_assert(offsetof(UFileMediaSource, PrecacheFile) == 0x000048, "Member 'UFileMediaSource::PrecacheFile' has a wrong offset!");

// Class MediaAssets.PlatformMediaSource
// 0x0008 (0x0040 - 0x0038)
class UPlatformMediaSource final : public UMediaSource
{
public:
	class UMediaSource*                           MediaSource;                                       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlatformMediaSource">();
	}
	static class UPlatformMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlatformMediaSource>();
	}
};
static_assert(alignof(UPlatformMediaSource) == 0x000008, "Wrong alignment on UPlatformMediaSource");
static_assert(sizeof(UPlatformMediaSource) == 0x000040, "Wrong size on UPlatformMediaSource");
static_assert(offsetof(UPlatformMediaSource, MediaSource) == 0x000038, "Member 'UPlatformMediaSource::MediaSource' has a wrong offset!");

// Class MediaAssets.StreamMediaSource
// 0x0010 (0x0048 - 0x0038)
class UStreamMediaSource final : public UMediaSource
{
public:
	class FString                                 StreamUrl;                                         // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StreamMediaSource">();
	}
	static class UStreamMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStreamMediaSource>();
	}
};
static_assert(alignof(UStreamMediaSource) == 0x000008, "Wrong alignment on UStreamMediaSource");
static_assert(sizeof(UStreamMediaSource) == 0x000048, "Wrong size on UStreamMediaSource");
static_assert(offsetof(UStreamMediaSource, StreamUrl) == 0x000038, "Member 'UStreamMediaSource::StreamUrl' has a wrong offset!");

// Class MediaAssets.MediaSubtitles
// 0x0010 (0x0038 - 0x0028)
class UMediaSubtitles final : public UObject
{
public:
	TArray<struct FMediaSubtitle>                 Subtitles;                                         // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaSubtitles">();
	}
	static class UMediaSubtitles* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaSubtitles>();
	}
};
static_assert(alignof(UMediaSubtitles) == 0x000008, "Wrong alignment on UMediaSubtitles");
static_assert(sizeof(UMediaSubtitles) == 0x000038, "Wrong size on UMediaSubtitles");
static_assert(offsetof(UMediaSubtitles, Subtitles) == 0x000028, "Member 'UMediaSubtitles::Subtitles' has a wrong offset!");

// Class MediaAssets.MediaTexture
// 0x00E8 (0x01B0 - 0x00C8)
class UMediaTexture final : public UTexture
{
public:
	uint8                                         Pad_C8[0x8];                                       // 0x00C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	ETextureAddress                               AddressX;                                          // 0x00D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               AddressY;                                          // 0x00D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D2[0x2];                                       // 0x00D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ClearColor;                                        // 0x00D4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaPlayer*                           MediaPlayer;                                       // 0x00E8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         VideoTrackIndex;                                   // 0x00F0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_F4[0xBC];                                      // 0x00F4(0x00BC)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaTexture">();
	}
	static class UMediaTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaTexture>();
	}
};
static_assert(alignof(UMediaTexture) == 0x000008, "Wrong alignment on UMediaTexture");
static_assert(sizeof(UMediaTexture) == 0x0001B0, "Wrong size on UMediaTexture");
static_assert(offsetof(UMediaTexture, AddressX) == 0x0000D0, "Member 'UMediaTexture::AddressX' has a wrong offset!");
static_assert(offsetof(UMediaTexture, AddressY) == 0x0000D1, "Member 'UMediaTexture::AddressY' has a wrong offset!");
static_assert(offsetof(UMediaTexture, ClearColor) == 0x0000D4, "Member 'UMediaTexture::ClearColor' has a wrong offset!");
static_assert(offsetof(UMediaTexture, MediaPlayer) == 0x0000E8, "Member 'UMediaTexture::MediaPlayer' has a wrong offset!");
static_assert(offsetof(UMediaTexture, VideoTrackIndex) == 0x0000F0, "Member 'UMediaTexture::VideoTrackIndex' has a wrong offset!");

}

