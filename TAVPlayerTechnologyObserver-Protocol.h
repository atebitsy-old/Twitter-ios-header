//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, NSString, TAVPlayerTechnologyState, UIView;
@protocol TAVPlayerOutputView, TAVPlayerTechnology;

@protocol TAVPlayerTechnologyObserver
- (void)playerTechnology:(id <TAVPlayerTechnology>)arg1 didEncounterNonFatalError:(NSError *)arg2;
- (void)playerTechnology:(id <TAVPlayerTechnology>)arg1 didUpdateOutputView:(UIView<TAVPlayerOutputView> *)arg2;
- (void)playerTechnology:(id <TAVPlayerTechnology>)arg1 didOutputTXXXFrameWithDescription:(NSString *)arg2 value:(NSString *)arg3;
- (void)playerTechnology:(id <TAVPlayerTechnology>)arg1 didUpdateState:(TAVPlayerTechnologyState *)arg2;
@end

