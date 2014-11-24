//
//  Creature.h
//  GameOfLife
//
//  Created by Khalid Ali on 11/23/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Creature : CCSprite

// stores the current state of the creature
@property (nonatomic, assign) BOOL isAlive;

// stores the amount of living neighbors
@property (nonatomic, assign) NSInteger livingNeighbors;

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

- (id)initCreature;

@end