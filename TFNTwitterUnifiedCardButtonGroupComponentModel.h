//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterUnifiedCardBaseComponentModel.h>

@class NSArray, TFNTwitterUnifiedCardDominantColorConfig;

@interface TFNTwitterUnifiedCardButtonGroupComponentModel : TFNTwitterUnifiedCardBaseComponentModel
{
    TFNTwitterUnifiedCardDominantColorConfig *_dominantColorConfig;
    NSArray *_buttons;
}

+ (id)componentWithJSON:(id)arg1 destinationDict:(id)arg2 mediaEntitiesDict:(id)arg3 appStoreData:(id)arg4 promotedContent:(id)arg5 usersDict:(id)arg6;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (id)dominantColorConfig;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithDestination:(id)arg1 buttons:(id)arg2 shouldRenderFullBleed:(_Bool)arg3 dominantColorConfig:(id)arg4;
- (id)initWithComponentJSON:(id)arg1 buttons:(id)arg2 destinationDict:(id)arg3;
- (id)withButton:(id)arg1;
- (id)withPromotedContent:(id)arg1;
- (id)axDestinations;

@end

