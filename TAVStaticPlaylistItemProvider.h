//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCore/TAVPlaylistItemProvider-Protocol.h>

@class NSString, TAVAnalyticsPlaylistItemMetadata, TAVPlaylistItem;

@interface TAVStaticPlaylistItemProvider : NSObject <TAVPlaylistItemProvider>
{
    TAVPlaylistItem *_playlistItem;
    TAVAnalyticsPlaylistItemMetadata *_metadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TAVAnalyticsPlaylistItemMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) TAVPlaylistItem *playlistItem; // @synthesize playlistItem=_playlistItem;
- (void)providePlaylistItemWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPlaylistItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

